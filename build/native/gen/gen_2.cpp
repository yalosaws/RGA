// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__2b__22__3f_::ctor_() {
    RT_FN("S__2b__22__3f_.S__2b__22__3f_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1515 = 1131.0; this->f_S_6_21_Z = rt::touint_d(_v1515); _v1515; });
    ({ double _v1516 = 0.0; this->f_S__60_r = rt::touint_d(_v1516); _v1516; });
    ({ double _v1517 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1517); _v1517; });
    ({ double _v1518 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1518); _v1518; });
    ({ double _v1519 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1519); _v1519; });
}
rt::Value C_S__2b__22__3f_::m_S__5b__21_C() {
    RT_FN("S__2b__22__3f_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1520 = rt::arr_lit({rt::V((double)(g::SV.C_S_9_22__3b___id)), rt::V((double)(g::SV.C_S__21__22_D__id)), rt::V((double)(g::SV.C_S__3e__22_A__id))}); this->f_S_3_3f_ = _v1520; _v1520; });
    return rt::NUL;
}
C_S__2b__22__3f_* C_S__2b__22__3f_::alloc_() {
    C_S__2b__22__3f_* o = rt::make<C_S__2b__22__3f_>();
    return o;
}
rt::Value C_S__2b__22__3f_::mk_(rt::Value* a, int n) {
    C_S__2b__22__3f_* o = alloc_();
    o->C_S__2b__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2b__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2b__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2b__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2b__22__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22__3f___id)); return true;
    default: return false;
    }
}
bool C_S__2b__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_H::ctor_() {
    RT_FN("S__2b__22_H.S__2b__22_H");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1521 = 1196.0; this->f_S_6_21_Z = rt::touint_d(_v1521); _v1521; });
    ({ bool _v1522 = true; this->f_S__5d__22_G = _v1522; _v1522; });
    ({ double _v1523 = 1.0; this->f_S__60_r = rt::touint_d(_v1523); _v1523; });
    ({ double _v1524 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1524); _v1524; });
    ({ double _v1525 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1525); _v1525; });
}
rt::Value C_S__2b__22_H::m_S__5b__21_C() {
    RT_FN("S__2b__22_H.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1526 = rt::arr_lit({rt::V((double)(g::SV.C_S__22__22__40___id)), rt::V((double)(g::SV.C_S__22__22__3f___id)), rt::V((double)(g::SV.C_S_1_22__3f___id))}); this->f_S_3_3f_ = _v1526; _v1526; });
    return rt::NUL;
}
C_S__2b__22_H* C_S__2b__22_H::alloc_() {
    C_S__2b__22_H* o = rt::make<C_S__2b__22_H>();
    return o;
}
rt::Value C_S__2b__22_H::mk_(rt::Value* a, int n) {
    C_S__2b__22_H* o = alloc_();
    o->C_S__2b__22_H::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2b__22_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2b__22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2b__22_H::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2b__22_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_H__id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22__3e_::ctor_() {
    RT_FN("S__2c__22__3e_.S__2c__22__3e_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1527 = 1123.0; this->f_S_6_21_Z = rt::touint_d(_v1527); _v1527; });
    ({ double _v1528 = 1.0; this->f_S__60_r = rt::touint_d(_v1528); _v1528; });
    ({ double _v1529 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1529); _v1529; });
    ({ double _v1530 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1530); _v1530; });
    ({ double _v1531 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1531); _v1531; });
}
rt::Value C_S__2c__22__3e_::m_S__5b__21_C() {
    RT_FN("S__2c__22__3e_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1532 = rt::arr_lit({rt::V((double)(g::SV.C_S_0_22__3b___id)), rt::V((double)(g::SV.C_S_7_22__3b___id)), rt::V((double)(g::SV.C_S__5e__22_A__id))}); this->f_S_3_3f_ = _v1532; _v1532; });
    return rt::NUL;
}
C_S__2c__22__3e_* C_S__2c__22__3e_::alloc_() {
    C_S__2c__22__3e_* o = rt::make<C_S__2c__22__3e_>();
    return o;
}
rt::Value C_S__2c__22__3e_::mk_(rt::Value* a, int n) {
    C_S__2c__22__3e_* o = alloc_();
    o->C_S__2c__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2c__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2c__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2c__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2c__22__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__3e___id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_A::ctor_() {
    RT_FN("S__2c__22_A.S__2c__22_A");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1533 = 1110.0; this->f_S_6_21_Z = rt::touint_d(_v1533); _v1533; });
    ({ double _v1534 = 0.0; this->f_S__60_r = rt::touint_d(_v1534); _v1534; });
    ({ double _v1535 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1535); _v1535; });
    ({ double _v1536 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1536); _v1536; });
    ({ double _v1537 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1537); _v1537; });
}
rt::Value C_S__2c__22_A::m_S__5b__21_C() {
    RT_FN("S__2c__22_A.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1538 = rt::arr_lit({rt::V((double)(g::SV.C_S__5d__22_C__id)), rt::V((double)(g::SV.C_S_4_22_B__id)), rt::V((double)(g::SV.C_S__2d__22__3b___id))}); this->f_S_3_3f_ = _v1538; _v1538; });
    return rt::NUL;
}
C_S__2c__22_A* C_S__2c__22_A::alloc_() {
    C_S__2c__22_A* o = rt::make<C_S__2c__22_A>();
    return o;
}
rt::Value C_S__2c__22_A::mk_(rt::Value* a, int n) {
    C_S__2c__22_A* o = alloc_();
    o->C_S__2c__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2c__22_A::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2c__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2c__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2c__22_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_A__id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_D::ctor_() {
    RT_FN("S__2c__22_D.S__2c__22_D");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1539 = 1111.0; this->f_S_6_21_Z = rt::touint_d(_v1539); _v1539; });
    ({ double _v1540 = 1.0; this->f_S__60_r = rt::touint_d(_v1540); _v1540; });
    ({ double _v1541 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1541); _v1541; });
    ({ double _v1542 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1542); _v1542; });
    ({ double _v1543 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1543); _v1543; });
}
rt::Value C_S__2c__22_D::m_S__5b__21_C() {
    RT_FN("S__2c__22_D.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1544 = rt::arr_lit({rt::V((double)(g::SV.C_S__20__22__3e___id)), rt::V((double)(g::SV.C_S__5e__22__3f___id)), rt::V((double)(g::SV.C_S_9_22_A__id))}); this->f_S_3_3f_ = _v1544; _v1544; });
    return rt::NUL;
}
C_S__2c__22_D* C_S__2c__22_D::alloc_() {
    C_S__2c__22_D* o = rt::make<C_S__2c__22_D>();
    return o;
}
rt::Value C_S__2c__22_D::mk_(rt::Value* a, int n) {
    C_S__2c__22_D* o = alloc_();
    o->C_S__2c__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2c__22_D::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2c__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2c__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2c__22_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_D__id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_H::ctor_() {
    RT_FN("S__2c__22_H.S__2c__22_H");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1545 = 1198.0; this->f_S_6_21_Z = rt::touint_d(_v1545); _v1545; });
    ({ bool _v1546 = true; this->f_S__5d__22_G = _v1546; _v1546; });
    ({ double _v1547 = 3.0; this->f_S__60_r = rt::touint_d(_v1547); _v1547; });
    ({ double _v1548 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1548); _v1548; });
    ({ double _v1549 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1549); _v1549; });
}
rt::Value C_S__2c__22_H::m_S__5b__21_C() {
    RT_FN("S__2c__22_H.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1550 = rt::arr_lit({rt::V((double)(g::SV.C_S__21__22__3f___id)), rt::V((double)(g::SV.C_S__25__22_A__id)), rt::V((double)(g::SV.C_S__40__22__3f___id))}); this->f_S_3_3f_ = _v1550; _v1550; });
    return rt::NUL;
}
C_S__2c__22_H* C_S__2c__22_H::alloc_() {
    C_S__2c__22_H* o = rt::make<C_S__2c__22_H>();
    return o;
}
rt::Value C_S__2c__22_H::mk_(rt::Value* a, int n) {
    C_S__2c__22_H* o = alloc_();
    o->C_S__2c__22_H::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2c__22_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2c__22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2c__22_H::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2c__22_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_H__id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22__3c_::ctor_() {
    RT_FN("S__2d__22__3c_.S__2d__22__3c_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1551 = 1109.0; this->f_S_6_21_Z = rt::touint_d(_v1551); _v1551; });
    ({ double _v1552 = 3.0; this->f_S__60_r = rt::touint_d(_v1552); _v1552; });
    ({ double _v1553 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1553); _v1553; });
    ({ double _v1554 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1554); _v1554; });
    ({ double _v1555 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1555); _v1555; });
}
rt::Value C_S__2d__22__3c_::m_S__5b__21_C() {
    RT_FN("S__2d__22__3c_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1556 = rt::arr_lit({rt::V((double)(g::SV.C_S_7_22__3e___id)), rt::V((double)(g::SV.C_S__3d__22__3f___id)), rt::V((double)(g::SV.C_S__25__22__3c___id))}); this->f_S_3_3f_ = _v1556; _v1556; });
    return rt::NUL;
}
C_S__2d__22__3c_* C_S__2d__22__3c_::alloc_() {
    C_S__2d__22__3c_* o = rt::make<C_S__2d__22__3c_>();
    return o;
}
rt::Value C_S__2d__22__3c_::mk_(rt::Value* a, int n) {
    C_S__2d__22__3c_* o = alloc_();
    o->C_S__2d__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2d__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2d__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2d__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2d__22__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22__3c___id)); return true;
    default: return false;
    }
}
bool C_S__2d__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_B::ctor_() {
    RT_FN("S__2d__22_B.S__2d__22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1557 = 1102.0; this->f_S_6_21_Z = rt::touint_d(_v1557); _v1557; });
    ({ double _v1558 = 0.0; this->f_S__60_r = rt::touint_d(_v1558); _v1558; });
    ({ double _v1559 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1559); _v1559; });
    ({ double _v1560 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1560); _v1560; });
    ({ double _v1561 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1561); _v1561; });
}
rt::Value C_S__2d__22_B::m_S__5b__21_C() {
    RT_FN("S__2d__22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1562 = rt::arr_lit({rt::V((double)(g::SV.C_S__40__22_9__id)), rt::V((double)(g::SV.C_S_0_22_B__id)), rt::V((double)(g::SV.C_S__2d__22_A__id))}); this->f_S_3_3f_ = _v1562; _v1562; });
    return rt::NUL;
}
C_S__2d__22_B* C_S__2d__22_B::alloc_() {
    C_S__2d__22_B* o = rt::make<C_S__2d__22_B>();
    return o;
}
rt::Value C_S__2d__22_B::mk_(rt::Value* a, int n) {
    C_S__2d__22_B* o = alloc_();
    o->C_S__2d__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2d__22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2d__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2d__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2d__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_H::ctor_() {
    RT_FN("S__2d__22_H.S__2d__22_H");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1563 = 1187.0; this->f_S_6_21_Z = rt::touint_d(_v1563); _v1563; });
    ({ bool _v1564 = true; this->f_S__5d__22_G = _v1564; _v1564; });
    ({ double _v1565 = 0.0; this->f_S__60_r = rt::touint_d(_v1565); _v1565; });
    ({ double _v1566 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1566); _v1566; });
    ({ double _v1567 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1567); _v1567; });
}
rt::Value C_S__2d__22_H::m_S__5b__21_C() {
    RT_FN("S__2d__22_H.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1568 = rt::arr_lit({rt::V((double)(g::SV.C_S__27__22_A__id)), rt::V((double)(g::SV.C_S__3d__22_D__id)), rt::V((double)(g::SV.C_S_7_22__40___id))}); this->f_S_3_3f_ = _v1568; _v1568; });
    return rt::NUL;
}
C_S__2d__22_H* C_S__2d__22_H::alloc_() {
    C_S__2d__22_H* o = rt::make<C_S__2d__22_H>();
    return o;
}
rt::Value C_S__2d__22_H::mk_(rt::Value* a, int n) {
    C_S__2d__22_H* o = alloc_();
    o->C_S__2d__22_H::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__2d__22_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__2d__22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__2d__22_H::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__2d__22_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_H__id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_22__3e_::ctor_() {
    RT_FN("S_0_22__3e_.S_0_22__3e_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1569 = 1113.0; this->f_S_6_21_Z = rt::touint_d(_v1569); _v1569; });
    ({ double _v1570 = 3.0; this->f_S__60_r = rt::touint_d(_v1570); _v1570; });
    ({ double _v1571 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1571); _v1571; });
    ({ double _v1572 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1572); _v1572; });
    ({ double _v1573 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1573); _v1573; });
}
rt::Value C_S_0_22__3e_::m_S__5b__21_C() {
    RT_FN("S_0_22__3e_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1574 = rt::arr_lit({rt::V((double)(g::SV.C_S__22__22_C__id)), rt::V((double)(g::SV.C_S__3d__22_9__id)), rt::V((double)(g::SV.C_S__3c__22_9__id))}); this->f_S_3_3f_ = _v1574; _v1574; });
    return rt::NUL;
}
C_S_0_22__3e_* C_S_0_22__3e_::alloc_() {
    C_S_0_22__3e_* o = rt::make<C_S_0_22__3e_>();
    return o;
}
rt::Value C_S_0_22__3e_::mk_(rt::Value* a, int n) {
    C_S_0_22__3e_* o = alloc_();
    o->C_S_0_22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_0_22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_0_22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_0_22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_0_22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_0_22__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22__3e___id)); return true;
    default: return false;
    }
}
bool C_S_0_22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_22_A::ctor_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_0_22_A.S_0_22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1575 = 1134.0; this->f_S_6_21_Z = rt::touint_d(_v1575); _v1575; });
    ({ int32_t _v1576 = l_param1; this->f_S__60_r = _v1576; _v1576; });
    if ((!(((double)(this->f_S__60_r)) == 0.0))) {
        ({ rt::Value _v1577 = rt::trv(rt::VS(g::LS[745]), rt::dcallv(rt::V((double)(this->f_S__60_r)), rt::N_toString)); this->f_S_1i = rt::slot_string(_v1577); _v1577; });
    } else {
        ({ rt::Value _v1578 = rt::trv(rt::VS(g::LS[746])); this->f_S_1i = rt::slot_string(_v1578); _v1578; });
    }
    ({ rt::Value _v1579 = rt::VS(g::LS[747]); this->f_S__5e__21__23_ = rt::slot_string(_v1579); _v1579; });
    ({ rt::Value _v1580 = rt::VS(g::LS[747]); this->f_S__3f__21__3d_ = rt::slot_string(_v1580); _v1580; });
    if ((!(((double)(this->f_S__60_r)) == 0.0))) {
        ({ rt::Value _v1581 = rt::VS(g::LS[747]); this->f_S__40_1 = rt::slot_string(_v1581); _v1581; });
    }
    ({ double _v1582 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1582); _v1582; });
    ({ double _v1583 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1583); _v1583; });
    ({ bool _v1584 = false; this->f_S_3e = _v1584; _v1584; });
}
rt::Value C_S_0_22_A::m_S__5b__21_C() {
    RT_FN("S_0_22_A.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ double _v1585 = ((100000.0 + (((double)(this->f_S_6_21_Z)) * 100.0)) + ((double)(this->f_S__60_r))); this->f_S_6_21_Z = rt::touint_d(_v1585); _v1585; });
    return rt::NUL;
}
rt::Value C_S_0_22_A::m_S__40__22_() {
    RT_FN("S_0_22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[748])));
    return rt::NUL;
}
rt::Value C_S_0_22_A::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_0_22_A.S_6r");
    ({ bool _v1586 = false; this->f_S__3c__21_7 = _v1586; _v1586; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v1587 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v1587); });
    return rt::NUL;
}
bool C_S_0_22_A::g_S__2d_6() {
    RT_FN("S_0_22_A.S__2d_6_get");
    return ({ bool _t1591 = ({ bool _t1588 = (((double)(C_S_8G::sg_S__2c_P())) >= 4.0); _t1588 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) : _t1588; }); _t1591 ? (bool)((({ bool _t1590 = (((double)(this->f_S__60_r)) > 0.0); _t1590 ? _t1590 : (bool)(({ bool _t1589 = (((double)(this->f_S__60_r)) == 0.0); _t1589 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5b__22__3d___id)) : _t1589; })); }))) : _t1591; });
    return false;
}
bool C_S_0_22_A::g_S__26_8() {
    RT_FN("S_0_22_A.S__26_8_get");
    return false;
    return false;
}
C_S_0_22_A* C_S_0_22_A::alloc_() {
    C_S_0_22_A* o = rt::make<C_S_0_22_A>();
    return o;
}
rt::Value C_S_0_22_A::mk_(rt::Value* a, int n) {
    C_S_0_22_A* o = alloc_();
    o->C_S_0_22_A::ctor_(rt::arg<int32_t>(a, n, 0, 0));
    return rt::VO(o);
}
bool C_S_0_22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__60_r: out = rt::V((double)(f_S__60_r)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_r: f_S__60_r = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_r: { rt::Value f = rt::V((double)(f_S__60_r)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_22_A::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    case NM_S__60_r: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_22_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_A::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_B::ctor_() {
    RT_FN("S_1_22_B.S_1_22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1592 = 1133.0; this->f_S_6_21_Z = rt::touint_d(_v1592); _v1592; });
    ({ double _v1593 = 2.0; this->f_S__60_r = rt::touint_d(_v1593); _v1593; });
    ({ double _v1594 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1594); _v1594; });
    ({ double _v1595 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1595); _v1595; });
    ({ double _v1596 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1596); _v1596; });
}
rt::Value C_S_1_22_B::m_S__5b__21_C() {
    RT_FN("S_1_22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1597 = rt::arr_lit({rt::V((double)(g::SV.C_S__3f__22_C__id)), rt::V((double)(g::SV.C_S__60__22_C__id)), rt::V((double)(g::SV.C_S__20__22__3b___id))}); this->f_S_3_3f_ = _v1597; _v1597; });
    return rt::NUL;
}
C_S_1_22_B* C_S_1_22_B::alloc_() {
    C_S_1_22_B* o = rt::make<C_S_1_22_B>();
    return o;
}
rt::Value C_S_1_22_B::mk_(rt::Value* a, int n) {
    C_S_1_22_B* o = alloc_();
    o->C_S_1_22_B::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_1_22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_1_22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_1_22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_1_22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_B__id)); return true;
    default: return false;
    }
}
bool C_S_1_22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_C::ctor_() {
    RT_FN("S_1_22_C.S_1_22_C");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1598 = 1114.0; this->f_S_6_21_Z = rt::touint_d(_v1598); _v1598; });
    ({ double _v1599 = 0.0; this->f_S__60_r = rt::touint_d(_v1599); _v1599; });
    ({ double _v1600 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1600); _v1600; });
    ({ double _v1601 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1601); _v1601; });
    ({ double _v1602 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1602); _v1602; });
}
rt::Value C_S_1_22_C::m_S__5b__21_C() {
    RT_FN("S_1_22_C.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1603 = rt::arr_lit({rt::V((double)(g::SV.C_S_2_22__3b___id)), rt::V((double)(g::SV.C_S_9_22_9__id)), rt::V((double)(g::SV.C_S__2c__22__3f___id))}); this->f_S_3_3f_ = _v1603; _v1603; });
    return rt::NUL;
}
C_S_1_22_C* C_S_1_22_C::alloc_() {
    C_S_1_22_C* o = rt::make<C_S_1_22_C>();
    return o;
}
rt::Value C_S_1_22_C::mk_(rt::Value* a, int n) {
    C_S_1_22_C* o = alloc_();
    o->C_S_1_22_C::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_1_22_C::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_1_22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_1_22_C::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_1_22_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_C__id)); return true;
    default: return false;
    }
}
bool C_S_1_22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_22__3f_::ctor_() {
    RT_FN("S_2_22__3f_.S_2_22__3f_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1604 = 1127.0; this->f_S_6_21_Z = rt::touint_d(_v1604); _v1604; });
    ({ double _v1605 = 0.0; this->f_S__60_r = rt::touint_d(_v1605); _v1605; });
    ({ double _v1606 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1606); _v1606; });
    ({ double _v1607 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1607); _v1607; });
    ({ double _v1608 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1608); _v1608; });
}
rt::Value C_S_2_22__3f_::m_S__5b__21_C() {
    RT_FN("S_2_22__3f_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1609 = rt::arr_lit({rt::V((double)(g::SV.C_S__21__22__3e___id)), rt::V((double)(g::SV.C_S_6_22__3f___id)), rt::V((double)(g::SV.C_S__5d__22_D__id))}); this->f_S_3_3f_ = _v1609; _v1609; });
    return rt::NUL;
}
C_S_2_22__3f_* C_S_2_22__3f_::alloc_() {
    C_S_2_22__3f_* o = rt::make<C_S_2_22__3f_>();
    return o;
}
rt::Value C_S_2_22__3f_::mk_(rt::Value* a, int n) {
    C_S_2_22__3f_* o = alloc_();
    o->C_S_2_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_2_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_2_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_2_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_2_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_2_22__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22__3f___id)); return true;
    default: return false;
    }
}
bool C_S_2_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_22_B::ctor_() {
    RT_FN("S_2_22_B.S_2_22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1610 = 1124.0; this->f_S_6_21_Z = rt::touint_d(_v1610); _v1610; });
    ({ double _v1611 = 2.0; this->f_S__60_r = rt::touint_d(_v1611); _v1611; });
    ({ double _v1612 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1612); _v1612; });
    ({ double _v1613 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1613); _v1613; });
    ({ double _v1614 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1614); _v1614; });
}
rt::Value C_S_2_22_B::m_S__5b__21_C() {
    RT_FN("S_2_22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1615 = rt::arr_lit({rt::V((double)(g::SV.C_S__22__22_B__id)), rt::V((double)(g::SV.C_S__2b__22_B__id)), rt::V((double)(g::SV.C_S__5d__22__40___id))}); this->f_S_3_3f_ = _v1615; _v1615; });
    return rt::NUL;
}
C_S_2_22_B* C_S_2_22_B::alloc_() {
    C_S_2_22_B* o = rt::make<C_S_2_22_B>();
    return o;
}
rt::Value C_S_2_22_B::mk_(rt::Value* a, int n) {
    C_S_2_22_B* o = alloc_();
    o->C_S_2_22_B::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_2_22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_2_22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_2_22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_2_22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_B__id)); return true;
    default: return false;
    }
}
bool C_S_2_22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_22_E::ctor_() {
    RT_FN("S_2_22_E.S_2_22_E");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1616 = 1151.0; this->f_S_6_21_Z = rt::touint_d(_v1616); _v1616; });
    ({ rt::Value _v1617 = rt::trv(rt::VS(g::LS[749])); this->f_S_1i = rt::slot_string(_v1617); _v1617; });
    ({ rt::Value _v1618 = rt::VS(g::LS[750]); this->f_S__5e__21__23_ = rt::slot_string(_v1618); _v1618; });
    ({ double _v1619 = 3.0; this->f_S_6_22_F = rt::toint_d(_v1619); _v1619; });
    ({ double _v1620 = 5.0; this->f_S__3b__21__23_ = rt::toint_d(_v1620); _v1620; });
}
rt::Value C_S_2_22_E::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_2_22_E.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[751]), C_S__26_c::sm_S_8_21_Z(C_S_2_22_E::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S_2_22_E::sm_S__2c__21_G() {
    RT_FN("S_2_22_E.S__2c__21_G");
    return rt::m_floor((0.2 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 0.6)));
    return 0.0;
}
C_S_2_22_E* C_S_2_22_E::alloc_() {
    C_S_2_22_E* o = rt::make<C_S_2_22_E>();
    return o;
}
rt::Value C_S_2_22_E::mk_(rt::Value* a, int n) {
    C_S_2_22_E* o = alloc_();
    o->C_S_2_22_E::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S_2_22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S_2_22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S_2_22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S_2_22_E::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_2_22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_E__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_3_22_F::ctor_() {
    RT_FN("S_3_22_F.S_3_22_F");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1621 = 1144.0; this->f_S_6_21_Z = rt::touint_d(_v1621); _v1621; });
    ({ rt::Value _v1622 = rt::trv(rt::VS(g::LS[752])); this->f_S_1i = rt::slot_string(_v1622); _v1622; });
    ({ rt::Value _v1623 = rt::VS(g::LS[753]); this->f_S__5e__21__23_ = rt::slot_string(_v1623); _v1623; });
    ({ double _v1624 = 1.0; this->f_S_6_22_F = rt::toint_d(_v1624); _v1624; });
    ({ double _v1625 = 3.0; this->f_S__3b__21__23_ = rt::toint_d(_v1625); _v1625; });
}
rt::Value C_S_3_22_F::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_3_22_F.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[754]), C_S__26_c::sm_S_8_21_Z(C_S_3_22_F::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S_3_22_F::sm_S__23__21_Y() {
    RT_FN("S_3_22_F.S__23__21_Y");
    return (2.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()))), 2.5));
    return 0.0;
}
C_S_3_22_F* C_S_3_22_F::alloc_() {
    C_S_3_22_F* o = rt::make<C_S_3_22_F>();
    return o;
}
rt::Value C_S_3_22_F::mk_(rt::Value* a, int n) {
    C_S_3_22_F* o = alloc_();
    o->C_S_3_22_F::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S_3_22_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S_3_22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S_3_22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S_3_22_F::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_3_22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_F__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_4_22__40_::ctor_() {
    RT_FN("S_4_22__40_.S_4_22__40_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1626 = 1117.0; this->f_S_6_21_Z = rt::touint_d(_v1626); _v1626; });
    ({ double _v1627 = 3.0; this->f_S__60_r = rt::touint_d(_v1627); _v1627; });
    ({ double _v1628 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1628); _v1628; });
    ({ double _v1629 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1629); _v1629; });
    ({ double _v1630 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1630); _v1630; });
}
rt::Value C_S_4_22__40_::m_S__5b__21_C() {
    RT_FN("S_4_22__40_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1631 = rt::arr_lit({rt::V((double)(g::SV.C_S_8_22__3e___id)), rt::V((double)(g::SV.C_S__27__22__40___id)), rt::V((double)(g::SV.C_S__3e__22__3b___id))}); this->f_S_3_3f_ = _v1631; _v1631; });
    return rt::NUL;
}
C_S_4_22__40_* C_S_4_22__40_::alloc_() {
    C_S_4_22__40_* o = rt::make<C_S_4_22__40_>();
    return o;
}
rt::Value C_S_4_22__40_::mk_(rt::Value* a, int n) {
    C_S_4_22__40_* o = alloc_();
    o->C_S_4_22__40_::ctor_();
    return rt::VO(o);
}
bool C_S_4_22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_4_22__40_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_4_22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_4_22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_4_22__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22__40___id)); return true;
    default: return false;
    }
}
bool C_S_4_22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_22_F::ctor_() {
    RT_FN("S_4_22_F.S_4_22_F");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1632 = 1140.0; this->f_S_6_21_Z = rt::touint_d(_v1632); _v1632; });
    ({ rt::Value _v1633 = rt::trv(rt::VS(g::LS[755])); this->f_S_1i = rt::slot_string(_v1633); _v1633; });
    ({ rt::Value _v1634 = rt::VS(g::LS[756]); this->f_S__5e__21__23_ = rt::slot_string(_v1634); _v1634; });
    ({ double _v1635 = 2.0; this->f_S_6_22_F = rt::toint_d(_v1635); _v1635; });
    ({ double _v1636 = 3.0; this->f_S__3b__21__23_ = rt::toint_d(_v1636); _v1636; });
}
rt::Value C_S_4_22_F::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_4_22_F.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[757]), C_S__26_c::sm_S_6_21_T(C_S_4_22_F::sm_S__27__21_b(), 5.0, C_S__26_c::dsm_S_6_21_T_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S_4_22_F::sm_S__27__21_b() {
    RT_FN("S_4_22_F.S__27__21_b");
    return (0.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__40_e())), 2.0));
    return 0.0;
}
C_S_4_22_F* C_S_4_22_F::alloc_() {
    C_S_4_22_F* o = rt::make<C_S_4_22_F>();
    return o;
}
rt::Value C_S_4_22_F::mk_(rt::Value* a, int n) {
    C_S_4_22_F* o = alloc_();
    o->C_S_4_22_F::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S_4_22_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S_4_22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S_4_22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S_4_22_F::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_4_22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_F__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_5_22_A::ctor_() {
    RT_FN("S_5_22_A.S_5_22_A");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1637 = 1115.0; this->f_S_6_21_Z = rt::touint_d(_v1637); _v1637; });
    ({ double _v1638 = 1.0; this->f_S__60_r = rt::touint_d(_v1638); _v1638; });
    ({ double _v1639 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1639); _v1639; });
    ({ double _v1640 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1640); _v1640; });
    ({ double _v1641 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1641); _v1641; });
}
rt::Value C_S_5_22_A::m_S__5b__21_C() {
    RT_FN("S_5_22_A.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1642 = rt::arr_lit({rt::V((double)(g::SV.C_S__3f__22_D__id)), rt::V((double)(g::SV.C_S__60__22_B__id)), rt::V((double)(g::SV.C_S__22__22__3e___id))}); this->f_S_3_3f_ = _v1642; _v1642; });
    return rt::NUL;
}
C_S_5_22_A* C_S_5_22_A::alloc_() {
    C_S_5_22_A* o = rt::make<C_S_5_22_A>();
    return o;
}
rt::Value C_S_5_22_A::mk_(rt::Value* a, int n) {
    C_S_5_22_A* o = alloc_();
    o->C_S_5_22_A::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_5_22_A::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_5_22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_5_22_A::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_5_22_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_A__id)); return true;
    default: return false;
    }
}
bool C_S_5_22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22_E::ctor_() {
    RT_FN("S_5_22_E.S_5_22_E");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1643 = 1148.0; this->f_S_6_21_Z = rt::touint_d(_v1643); _v1643; });
    ({ rt::Value _v1644 = rt::trv(rt::VS(g::LS[758])); this->f_S_1i = rt::slot_string(_v1644); _v1644; });
    ({ rt::Value _v1645 = rt::VS(g::LS[759]); this->f_S__5e__21__23_ = rt::slot_string(_v1645); _v1645; });
    ({ double _v1646 = 0.0; this->f_S_6_22_F = rt::toint_d(_v1646); _v1646; });
    ({ double _v1647 = 1.0; this->f_S__3b__21__23_ = rt::toint_d(_v1647); _v1647; });
}
rt::Value C_S_5_22_E::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_5_22_E.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[760]), C_S__26_c::sm_S_6_21_T(C_S_5_22_E::sm_S__27__21_b(), 5.0, C_S__26_c::dsm_S_6_21_T_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S_5_22_E::sm_S__27__21_b() {
    RT_FN("S_5_22_E.S__27__21_b");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 2.0));
    return 0.0;
}
C_S_5_22_E* C_S_5_22_E::alloc_() {
    C_S_5_22_E* o = rt::make<C_S_5_22_E>();
    return o;
}
rt::Value C_S_5_22_E::mk_(rt::Value* a, int n) {
    C_S_5_22_E* o = alloc_();
    o->C_S_5_22_E::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S_5_22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S_5_22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S_5_22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S_5_22_E::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_5_22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_E__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_5_22_F::ctor_() {
    RT_FN("S_5_22_F.S_5_22_F");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1648 = 1143.0; this->f_S_6_21_Z = rt::touint_d(_v1648); _v1648; });
    ({ rt::Value _v1649 = rt::trv(rt::VS(g::LS[761])); this->f_S_1i = rt::slot_string(_v1649); _v1649; });
    ({ rt::Value _v1650 = rt::VS(g::LS[762]); this->f_S__5e__21__23_ = rt::slot_string(_v1650); _v1650; });
    ({ double _v1651 = 1.0; this->f_S_6_22_F = rt::toint_d(_v1651); _v1651; });
    ({ double _v1652 = 5.0; this->f_S__3b__21__23_ = rt::toint_d(_v1652); _v1652; });
}
rt::Value C_S_5_22_F::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_5_22_F.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[763]), C_S__26_c::sm_S_8_21_Z(((double)(C_S_5_22_F::sm_S_6_22_4())), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[764]), C_S__26_c::sm_S_8_21_Z(C_S_5_22_F::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
uint32_t C_S_5_22_F::sm_S_6_22_4() {
    RT_FN("S_5_22_F.S_6_22_4");
    return rt::touint_d((1.0 + (1.5 * rt::m_pow(C_S__26_c::sm_S_1_22_O(C_S__26_c::dsm_S_1_22_O_0()), 0.2))));
    return 0u;
}
double C_S_5_22_F::sm_S_6_21_Y() {
    RT_FN("S_5_22_F.S_6_21_Y");
    return (2.0 * rt::m_pow(rt::m_log(rt::tonum(rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 63.0)))), 2.0));
    return 0.0;
}
C_S_5_22_F* C_S_5_22_F::alloc_() {
    C_S_5_22_F* o = rt::make<C_S_5_22_F>();
    return o;
}
rt::Value C_S_5_22_F::mk_(rt::Value* a, int n) {
    C_S_5_22_F* o = alloc_();
    o->C_S_5_22_F::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S_5_22_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S_5_22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S_5_22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S_5_22_F::smeth_(int id) {
    switch (id) {
    case NM_S_6_22_4: return true;
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S_5_22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_F__id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S_7_22__3c_::ctor_() {
    RT_FN("S_7_22__3c_.S_7_22__3c_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1653 = 1098.0; this->f_S_6_21_Z = rt::touint_d(_v1653); _v1653; });
    ({ double _v1654 = 0.0; this->f_S__60_r = rt::touint_d(_v1654); _v1654; });
    ({ double _v1655 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1655); _v1655; });
    ({ double _v1656 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1656); _v1656; });
    ({ double _v1657 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1657); _v1657; });
}
rt::Value C_S_7_22__3c_::m_S__5b__21_C() {
    RT_FN("S_7_22__3c_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1658 = rt::arr_lit({rt::V((double)(g::SV.C_S__5e__22_D__id)), rt::V((double)(g::SV.C_S__3c__22__3c___id)), rt::V((double)(g::SV.C_S__3f__22_A__id))}); this->f_S_3_3f_ = _v1658; _v1658; });
    return rt::NUL;
}
C_S_7_22__3c_* C_S_7_22__3c_::alloc_() {
    C_S_7_22__3c_* o = rt::make<C_S_7_22__3c_>();
    return o;
}
rt::Value C_S_7_22__3c_::mk_(rt::Value* a, int n) {
    C_S_7_22__3c_* o = alloc_();
    o->C_S_7_22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_7_22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_7_22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_7_22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_7_22__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__3c___id)); return true;
    default: return false;
    }
}
bool C_S_7_22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_A::ctor_() {
    RT_FN("S_7_22_A.S_7_22_A");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1659 = 1120.0; this->f_S_6_21_Z = rt::touint_d(_v1659); _v1659; });
    ({ double _v1660 = 2.0; this->f_S__60_r = rt::touint_d(_v1660); _v1660; });
    ({ double _v1661 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1661); _v1661; });
    ({ double _v1662 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1662); _v1662; });
    ({ double _v1663 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1663); _v1663; });
}
rt::Value C_S_7_22_A::m_S__5b__21_C() {
    RT_FN("S_7_22_A.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1664 = rt::arr_lit({rt::V((double)(g::SV.C_S__3d__22_C__id)), rt::V((double)(g::SV.C_S_8_22__3d___id)), rt::V((double)(g::SV.C_S__2c__22__3b___id))}); this->f_S_3_3f_ = _v1664; _v1664; });
    return rt::NUL;
}
C_S_7_22_A* C_S_7_22_A::alloc_() {
    C_S_7_22_A* o = rt::make<C_S_7_22_A>();
    return o;
}
rt::Value C_S_7_22_A::mk_(rt::Value* a, int n) {
    C_S_7_22_A* o = alloc_();
    o->C_S_7_22_A::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_7_22_A::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_7_22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_7_22_A::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_7_22_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_A__id)); return true;
    default: return false;
    }
}
bool C_S_7_22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_22_D::ctor_() {
    RT_FN("S_8_22_D.S_8_22_D");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1665 = 1101.0; this->f_S_6_21_Z = rt::touint_d(_v1665); _v1665; });
    ({ double _v1666 = 3.0; this->f_S__60_r = rt::touint_d(_v1666); _v1666; });
    ({ double _v1667 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1667); _v1667; });
    ({ double _v1668 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1668); _v1668; });
    ({ double _v1669 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1669); _v1669; });
}
rt::Value C_S_8_22_D::m_S__5b__21_C() {
    RT_FN("S_8_22_D.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1670 = rt::arr_lit({rt::V((double)(g::SV.C_S__2b__22__3b___id)), rt::V((double)(g::SV.C_S_1_22_A__id)), rt::V((double)(g::SV.C_S_5_22__3e___id))}); this->f_S_3_3f_ = _v1670; _v1670; });
    return rt::NUL;
}
C_S_8_22_D* C_S_8_22_D::alloc_() {
    C_S_8_22_D* o = rt::make<C_S_8_22_D>();
    return o;
}
rt::Value C_S_8_22_D::mk_(rt::Value* a, int n) {
    C_S_8_22_D* o = alloc_();
    o->C_S_8_22_D::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S_8_22_D::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S_8_22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S_8_22_D::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S_8_22_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_D__id)); return true;
    default: return false;
    }
}
bool C_S_8_22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_22_E::ctor_() {
    RT_FN("S_8_22_E.S_8_22_E");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1671 = 1152.0; this->f_S_6_21_Z = rt::touint_d(_v1671); _v1671; });
    ({ rt::Value _v1672 = rt::trv(rt::VS(g::LS[765])); this->f_S_1i = rt::slot_string(_v1672); _v1672; });
    ({ rt::Value _v1673 = rt::VS(g::LS[766]); this->f_S__5e__21__23_ = rt::slot_string(_v1673); _v1673; });
    ({ double _v1674 = 3.0; this->f_S_6_22_F = rt::toint_d(_v1674); _v1674; });
    ({ double _v1675 = 4.0; this->f_S__3b__21__23_ = rt::toint_d(_v1675); _v1675; });
}
rt::Value C_S_8_22_E::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_8_22_E.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[767]), C_S__26_c::sm_S_8_21_Z(C_S_8_22_E::sm_S_6_22__24_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[768]), C_S__26_c::sm_S_6_21_T(C_S_8_22_E::sm_S__27__21_b(), 5.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S_8_22_E::sm_S_6_22__24_() {
    RT_FN("S_8_22_E.S_6_22__24_");
    return rt::m_min2(3000.0, (50.0 + (1.15 * rt::m_pow(rt::m_log((1.0 + rt::m_min2(C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), C_S__26_c::sm_S__22__21_B(rt::toint_d(14.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4())))), 3.15))));
    return 0.0;
}
double C_S_8_22_E::sm_S__27__21_b() {
    RT_FN("S_8_22_E.S__27__21_b");
    return (1.3 * rt::m_pow(C_S__26_c::sm_S__3f__22_H(), 0.7));
    return 0.0;
}
C_S_8_22_E* C_S_8_22_E::alloc_() {
    C_S_8_22_E* o = rt::make<C_S_8_22_E>();
    return o;
}
rt::Value C_S_8_22_E::mk_(rt::Value* a, int n) {
    C_S_8_22_E* o = alloc_();
    o->C_S_8_22_E::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S_8_22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S_8_22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S_8_22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S_8_22_E::smeth_(int id) {
    switch (id) {
    case NM_S_6_22__24_: return true;
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_8_22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_E__id)); return true;
    case NM_S_6_22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22__24_: out = rt::V(sm_S_6_22__24_()); return true;
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3b__22__3d_::ctor_() {
    RT_FN("S__3b__22__3d_.S__3b__22__3d_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1676 = 1129.0; this->f_S_6_21_Z = rt::touint_d(_v1676); _v1676; });
    ({ double _v1677 = 2.0; this->f_S__60_r = rt::touint_d(_v1677); _v1677; });
    ({ double _v1678 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1678); _v1678; });
    ({ double _v1679 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1679); _v1679; });
    ({ double _v1680 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1680); _v1680; });
}
rt::Value C_S__3b__22__3d_::m_S__5b__21_C() {
    RT_FN("S__3b__22__3d_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1681 = rt::arr_lit({rt::V((double)(g::SV.C_S_6_22__3c___id)), rt::V((double)(g::SV.C_S__40__22_C__id)), rt::V((double)(g::SV.C_S__27__22__3e___id))}); this->f_S_3_3f_ = _v1681; _v1681; });
    return rt::NUL;
}
C_S__3b__22__3d_* C_S__3b__22__3d_::alloc_() {
    C_S__3b__22__3d_* o = rt::make<C_S__3b__22__3d_>();
    return o;
}
rt::Value C_S__3b__22__3d_::mk_(rt::Value* a, int n) {
    C_S__3b__22__3d_* o = alloc_();
    o->C_S__3b__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__3b__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__3b__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__3b__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__3b__22__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22__3d___id)); return true;
    default: return false;
    }
}
bool C_S__3b__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22__40_::ctor_() {
    RT_FN("S__3b__22__40_.S__3b__22__40_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1682 = 1126.0; this->f_S_6_21_Z = rt::touint_d(_v1682); _v1682; });
    ({ double _v1683 = 3.0; this->f_S__60_r = rt::touint_d(_v1683); _v1683; });
    ({ double _v1684 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1684); _v1684; });
    ({ double _v1685 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1685); _v1685; });
    ({ double _v1686 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1686); _v1686; });
}
rt::Value C_S__3b__22__40_::m_S__5b__21_C() {
    RT_FN("S__3b__22__40_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1687 = rt::arr_lit({rt::V((double)(g::SV.C_S__20__22_C__id)), rt::V((double)(g::SV.C_S__23__22_E__id)), rt::V((double)(g::SV.C_S__5d__22__3c___id))}); this->f_S_3_3f_ = _v1687; _v1687; });
    return rt::NUL;
}
C_S__3b__22__40_* C_S__3b__22__40_::alloc_() {
    C_S__3b__22__40_* o = rt::make<C_S__3b__22__40_>();
    return o;
}
rt::Value C_S__3b__22__40_::mk_(rt::Value* a, int n) {
    C_S__3b__22__40_* o = alloc_();
    o->C_S__3b__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__3b__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__3b__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__3b__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__3b__22__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22__40___id)); return true;
    default: return false;
    }
}
bool C_S__3b__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22_B::ctor_() {
    RT_FN("S__3b__22_B.S__3b__22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1688 = 1128.0; this->f_S_6_21_Z = rt::touint_d(_v1688); _v1688; });
    ({ double _v1689 = 1.0; this->f_S__60_r = rt::touint_d(_v1689); _v1689; });
    ({ double _v1690 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1690); _v1690; });
    ({ double _v1691 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1691); _v1691; });
    ({ double _v1692 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1692); _v1692; });
}
rt::Value C_S__3b__22_B::m_S__5b__21_C() {
    RT_FN("S__3b__22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1693 = rt::arr_lit({rt::V((double)(g::SV.C_S__3c__22__3d___id)), rt::V((double)(g::SV.C_S__60__22__40___id)), rt::V((double)(g::SV.C_S__22__22_E__id))}); this->f_S_3_3f_ = _v1693; _v1693; });
    return rt::NUL;
}
C_S__3b__22_B* C_S__3b__22_B::alloc_() {
    C_S__3b__22_B* o = rt::make<C_S__3b__22_B>();
    return o;
}
rt::Value C_S__3b__22_B::mk_(rt::Value* a, int n) {
    C_S__3b__22_B* o = alloc_();
    o->C_S__3b__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__3b__22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__3b__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__3b__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__3b__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22_E::ctor_() {
    RT_FN("S__3b__22_E.S__3b__22_E");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1694 = 1147.0; this->f_S_6_21_Z = rt::touint_d(_v1694); _v1694; });
    ({ rt::Value _v1695 = rt::trv(rt::VS(g::LS[769])); this->f_S_1i = rt::slot_string(_v1695); _v1695; });
    ({ rt::Value _v1696 = rt::VS(g::LS[770]); this->f_S__5e__21__23_ = rt::slot_string(_v1696); _v1696; });
    ({ double _v1697 = 0.0; this->f_S_6_22_F = rt::toint_d(_v1697); _v1697; });
    ({ double _v1698 = 5.0; this->f_S__3b__21__23_ = rt::toint_d(_v1698); _v1698; });
}
rt::Value C_S__3b__22_E::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3b__22_E.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[771]), C_S__26_c::sm_S_8_21_Z(C_S__3b__22_E::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S__3b__22_E::sm_S_9L() {
    RT_FN("S__3b__22_E.S_9L");
    return rt::m_pow((((((rt::m_pow(((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(1.0)))), 1.3) + rt::m_pow(((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(4.0)))), 1.3)) + rt::m_pow(((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(3.0)))), 1.3)) + rt::m_pow(((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(6.0)))), 1.3)) + rt::m_pow(((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(2.0)))), 1.3)) + rt::m_pow(((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(5.0)))), 1.3)), (1.0 + (rt::m_minv(rt::V((((((((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(1.0)))) + ((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(4.0))))) + ((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(3.0))))) + ((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(6.0))))) + ((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(2.0))))) + ((double)(C_S__26_c::sm_S_8_22_F(rt::toint_d(5.0))))))) * 0.3)));
    return 0.0;
}
C_S__3b__22_E* C_S__3b__22_E::alloc_() {
    C_S__3b__22_E* o = rt::make<C_S__3b__22_E>();
    return o;
}
rt::Value C_S__3b__22_E::mk_(rt::Value* a, int n) {
    C_S__3b__22_E* o = alloc_();
    o->C_S__3b__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S__3b__22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S__3b__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S__3b__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S__3b__22_E::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3b__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_E__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3d__22_B::ctor_() {
    RT_FN("S__3d__22_B.S__3d__22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1699 = 1130.0; this->f_S_6_21_Z = rt::touint_d(_v1699); _v1699; });
    ({ double _v1700 = 3.0; this->f_S__60_r = rt::touint_d(_v1700); _v1700; });
    ({ double _v1701 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1701); _v1701; });
    ({ double _v1702 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1702); _v1702; });
    ({ double _v1703 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1703); _v1703; });
}
rt::Value C_S__3d__22_B::m_S__5b__21_C() {
    RT_FN("S__3d__22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1704 = rt::arr_lit({rt::V((double)(g::SV.C_S_3_22__3c___id)), rt::V((double)(g::SV.C_S_0_22__3f___id)), rt::V((double)(g::SV.C_S__60__22__3b___id))}); this->f_S_3_3f_ = _v1704; _v1704; });
    return rt::NUL;
}
C_S__3d__22_B* C_S__3d__22_B::alloc_() {
    C_S__3d__22_B* o = rt::make<C_S__3d__22_B>();
    return o;
}
rt::Value C_S__3d__22_B::mk_(rt::Value* a, int n) {
    C_S__3d__22_B* o = alloc_();
    o->C_S__3d__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__3d__22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__3d__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__3d__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__3d__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__22_E::ctor_() {
    RT_FN("S__3d__22_E.S__3d__22_E");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1705 = 1153.0; this->f_S_6_21_Z = rt::touint_d(_v1705); _v1705; });
    ({ rt::Value _v1706 = rt::trv(rt::VS(g::LS[772])); this->f_S_1i = rt::slot_string(_v1706); _v1706; });
    ({ rt::Value _v1707 = rt::VS(g::LS[773]); this->f_S__5e__21__23_ = rt::slot_string(_v1707); _v1707; });
    ({ double _v1708 = 4.0; this->f_S_6_22_F = rt::toint_d(_v1708); _v1708; });
    ({ double _v1709 = 5.0; this->f_S__3b__21__23_ = rt::toint_d(_v1709); _v1709; });
}
rt::Value C_S__3d__22_E::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d__22_E.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[774]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22_E::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
double C_S__3d__22_E::sm_S__2b__2b_() {
    RT_FN("S__3d__22_E.S__2b__2b_");
    return (0.9 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.9));
    return 0.0;
}
C_S__3d__22_E* C_S__3d__22_E::alloc_() {
    C_S__3d__22_E* o = rt::make<C_S__3d__22_E>();
    return o;
}
rt::Value C_S__3d__22_E::mk_(rt::Value* a, int n) {
    C_S__3d__22_E* o = alloc_();
    o->C_S__3d__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S__3d__22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S__3d__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S__3d__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S__3d__22_E::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__3d__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_E__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__40__22__3e_::ctor_() {
    RT_FN("S__40__22__3e_.S__40__22__3e_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1710 = 1125.0; this->f_S_6_21_Z = rt::touint_d(_v1710); _v1710; });
    ({ double _v1711 = 3.0; this->f_S__60_r = rt::touint_d(_v1711); _v1711; });
    ({ double _v1712 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1712); _v1712; });
    ({ double _v1713 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1713); _v1713; });
    ({ double _v1714 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1714); _v1714; });
}
rt::Value C_S__40__22__3e_::m_S__5b__21_C() {
    RT_FN("S__40__22__3e_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1715 = rt::arr_lit({rt::V((double)(g::SV.C_S__20__22_A__id)), rt::V((double)(g::SV.C_S__3d__22__3e___id)), rt::V((double)(g::SV.C_S__23__22__40___id))}); this->f_S_3_3f_ = _v1715; _v1715; });
    return rt::NUL;
}
C_S__40__22__3e_* C_S__40__22__3e_::alloc_() {
    C_S__40__22__3e_* o = rt::make<C_S__40__22__3e_>();
    return o;
}
rt::Value C_S__40__22__3e_::mk_(rt::Value* a, int n) {
    C_S__40__22__3e_* o = alloc_();
    o->C_S__40__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__40__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__40__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__40__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__40__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__40__22__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22__3e___id)); return true;
    default: return false;
    }
}
bool C_S__40__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22_B::ctor_() {
    RT_FN("S__40__22_B.S__40__22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1716 = 1122.0; this->f_S_6_21_Z = rt::touint_d(_v1716); _v1716; });
    ({ double _v1717 = 0.0; this->f_S__60_r = rt::touint_d(_v1717); _v1717; });
    ({ double _v1718 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1718); _v1718; });
    ({ double _v1719 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1719); _v1719; });
    ({ double _v1720 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1720); _v1720; });
}
rt::Value C_S__40__22_B::m_S__5b__21_C() {
    RT_FN("S__40__22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1721 = rt::arr_lit({rt::V((double)(g::SV.C_S__3f__22__40___id)), rt::V((double)(g::SV.C_S__3c__22_B__id)), rt::V((double)(g::SV.C_S__2b__22__3e___id))}); this->f_S_3_3f_ = _v1721; _v1721; });
    return rt::NUL;
}
C_S__40__22_B* C_S__40__22_B::alloc_() {
    C_S__40__22_B* o = rt::make<C_S__40__22_B>();
    return o;
}
rt::Value C_S__40__22_B::mk_(rt::Value* a, int n) {
    C_S__40__22_B* o = alloc_();
    o->C_S__40__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__40__22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__40__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__40__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__40__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__40__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__22_D::ctor_() {
    RT_FN("S__5b__22_D.S__5b__22_D");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1722 = 1107.0; this->f_S_6_21_Z = rt::touint_d(_v1722); _v1722; });
    ({ double _v1723 = 1.0; this->f_S__60_r = rt::touint_d(_v1723); _v1723; });
    ({ double _v1724 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1724); _v1724; });
    ({ double _v1725 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v1725); _v1725; });
    ({ double _v1726 = 6.0; this->f_S_9_21_m = rt::toint_d(_v1726); _v1726; });
}
rt::Value C_S__5b__22_D::m_S__5b__21_C() {
    RT_FN("S__5b__22_D.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1727 = rt::arr_lit({rt::V((double)(g::SV.C_S__2d__22_D__id)), rt::V((double)(g::SV.C_S_2_22_C__id)), rt::V((double)(g::SV.C_S__3f__22__3e___id))}); this->f_S_3_3f_ = _v1727; _v1727; });
    return rt::NUL;
}
C_S__5b__22_D* C_S__5b__22_D::alloc_() {
    C_S__5b__22_D* o = rt::make<C_S__5b__22_D>();
    return o;
}
rt::Value C_S__5b__22_D::mk_(rt::Value* a, int n) {
    C_S__5b__22_D* o = alloc_();
    o->C_S__5b__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__5b__22_D::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__5b__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__5b__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__5b__22_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_D__id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__22_G::ctor_() {
    RT_FN("S__5b__22_G.S__5b__22_G");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1728 = 1194.0; this->f_S_6_21_Z = rt::touint_d(_v1728); _v1728; });
    ({ bool _v1729 = true; this->f_S__5d__22_G = _v1729; _v1729; });
    ({ double _v1730 = 3.0; this->f_S__60_r = rt::touint_d(_v1730); _v1730; });
    ({ double _v1731 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1731); _v1731; });
    ({ double _v1732 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1732); _v1732; });
}
rt::Value C_S__5b__22_G::m_S__5b__21_C() {
    RT_FN("S__5b__22_G.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1733 = rt::arr_lit({rt::V((double)(g::SV.C_S_8_22_B__id)), rt::V((double)(g::SV.C_S__26__22_C__id)), rt::V((double)(g::SV.C_S__60__22__3e___id))}); this->f_S_3_3f_ = _v1733; _v1733; });
    return rt::NUL;
}
C_S__5b__22_G* C_S__5b__22_G::alloc_() {
    C_S__5b__22_G* o = rt::make<C_S__5b__22_G>();
    return o;
}
rt::Value C_S__5b__22_G::mk_(rt::Value* a, int n) {
    C_S__5b__22_G* o = alloc_();
    o->C_S__5b__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__5b__22_G::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__5b__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__5b__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__5b__22_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_G__id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22__3f_::ctor_() {
    RT_FN("S__5d__22__3f_.S__5d__22__3f_");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1734 = 1118.0; this->f_S_6_21_Z = rt::touint_d(_v1734); _v1734; });
    ({ double _v1735 = 0.0; this->f_S__60_r = rt::touint_d(_v1735); _v1735; });
    ({ double _v1736 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1736); _v1736; });
    ({ double _v1737 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1737); _v1737; });
    ({ double _v1738 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1738); _v1738; });
}
rt::Value C_S__5d__22__3f_::m_S__5b__21_C() {
    RT_FN("S__5d__22__3f_.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1739 = rt::arr_lit({rt::V((double)(g::SV.C_S__21__22__3c___id)), rt::V((double)(g::SV.C_S_9_22_D__id)), rt::V((double)(g::SV.C_S__5d__22__3d___id))}); this->f_S_3_3f_ = _v1739; _v1739; });
    return rt::NUL;
}
C_S__5d__22__3f_* C_S__5d__22__3f_::alloc_() {
    C_S__5d__22__3f_* o = rt::make<C_S__5d__22__3f_>();
    return o;
}
rt::Value C_S__5d__22__3f_::mk_(rt::Value* a, int n) {
    C_S__5d__22__3f_* o = alloc_();
    o->C_S__5d__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__5d__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__5d__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__5d__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__5d__22__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22__3f___id)); return true;
    default: return false;
    }
}
bool C_S__5d__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_E::ctor_() {
    RT_FN("S__5d__22_E.S__5d__22_E");
    (void)((this->C_S_0_22_E::ctor_(), rt::NUL));
    ({ double _v1740 = 1149.0; this->f_S_6_21_Z = rt::touint_d(_v1740); _v1740; });
    ({ rt::Value _v1741 = rt::trv(rt::VS(g::LS[775])); this->f_S_1i = rt::slot_string(_v1741); _v1741; });
    ({ rt::Value _v1742 = rt::VS(g::LS[776]); this->f_S__5e__21__23_ = rt::slot_string(_v1742); _v1742; });
    ({ double _v1743 = 0.0; this->f_S_6_22_F = rt::toint_d(_v1743); _v1743; });
    ({ double _v1744 = 3.0; this->f_S__3b__21__23_ = rt::toint_d(_v1744); _v1744; });
}
rt::Value C_S__5d__22_E::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5d__22_E.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[777]))));
    return rt::slot_string(rt::add(l_A__loc1_, this->C_S_0_22_E::m_S__40__22_()));
    return rt::NUL;
}
C_S__5d__22_E* C_S__5d__22_E::alloc_() {
    C_S__5d__22_E* o = rt::make<C_S__5d__22_E>();
    return o;
}
rt::Value C_S__5d__22_E::mk_(rt::Value* a, int n) {
    C_S__5d__22_E* o = alloc_();
    o->C_S__5d__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_0_22_E::dget(id, out);
}
bool C_S__5d__22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_0_22_E::dset(id, v);
}
bool C_S__5d__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S_0_22_E::dcall(id, a, n, out);
}
bool C_S__5d__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S_0_22_E::dmeth(id);
}
bool C_S__5d__22_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_E__id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_9::ctor_() {
    RT_FN("S__5e__22_9.S__5e__22_9");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1745 = 1103.0; this->f_S_6_21_Z = rt::touint_d(_v1745); _v1745; });
    ({ double _v1746 = 1.0; this->f_S__60_r = rt::touint_d(_v1746); _v1746; });
    ({ double _v1747 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1747); _v1747; });
    ({ double _v1748 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1748); _v1748; });
    ({ double _v1749 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1749); _v1749; });
}
rt::Value C_S__5e__22_9::m_S__5b__21_C() {
    RT_FN("S__5e__22_9.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1750 = rt::arr_lit({rt::V((double)(g::SV.C_S__40__22__3b___id)), rt::V((double)(g::SV.C_S__21__22__3d___id)), rt::V((double)(g::SV.C_S__23__22__3f___id))}); this->f_S_3_3f_ = _v1750; _v1750; });
    return rt::NUL;
}
C_S__5e__22_9* C_S__5e__22_9::alloc_() {
    C_S__5e__22_9* o = rt::make<C_S__5e__22_9>();
    return o;
}
rt::Value C_S__5e__22_9::mk_(rt::Value* a, int n) {
    C_S__5e__22_9* o = alloc_();
    o->C_S__5e__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__5e__22_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__5e__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__5e__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__5e__22_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_9__id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_B::ctor_() {
    RT_FN("S__5e__22_B.S__5e__22_B");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1751 = 1099.0; this->f_S_6_21_Z = rt::touint_d(_v1751); _v1751; });
    ({ double _v1752 = 1.0; this->f_S__60_r = rt::touint_d(_v1752); _v1752; });
    ({ double _v1753 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1753); _v1753; });
    ({ double _v1754 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1754); _v1754; });
    ({ double _v1755 = 4.0; this->f_S_9_21_m = rt::toint_d(_v1755); _v1755; });
}
rt::Value C_S__5e__22_B::m_S__5b__21_C() {
    RT_FN("S__5e__22_B.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1756 = rt::arr_lit({rt::V((double)(g::SV.C_S__2b__22__3c___id)), rt::V((double)(g::SV.C_S__20__22__3f___id)), rt::V((double)(g::SV.C_S__23__22__3d___id))}); this->f_S_3_3f_ = _v1756; _v1756; });
    return rt::NUL;
}
C_S__5e__22_B* C_S__5e__22_B::alloc_() {
    C_S__5e__22_B* o = rt::make<C_S__5e__22_B>();
    return o;
}
rt::Value C_S__5e__22_B::mk_(rt::Value* a, int n) {
    C_S__5e__22_B* o = alloc_();
    o->C_S__5e__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__5e__22_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__5e__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__5e__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__5e__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_G::ctor_() {
    RT_FN("S__5e__22_G.S__5e__22_G");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1757 = 1192.0; this->f_S_6_21_Z = rt::touint_d(_v1757); _v1757; });
    ({ bool _v1758 = true; this->f_S__5d__22_G = _v1758; _v1758; });
    ({ double _v1759 = 1.0; this->f_S__60_r = rt::touint_d(_v1759); _v1759; });
    ({ double _v1760 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1760); _v1760; });
    ({ double _v1761 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1761); _v1761; });
}
rt::Value C_S__5e__22_G::m_S__5b__21_C() {
    RT_FN("S__5e__22_G.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1762 = rt::arr_lit({rt::V((double)(g::SV.C_S__26__22__3c___id)), rt::V((double)(g::SV.C_S__2b__22_D__id)), rt::V((double)(g::SV.C_S__5b__22_9__id))}); this->f_S_3_3f_ = _v1762; _v1762; });
    return rt::NUL;
}
C_S__5e__22_G* C_S__5e__22_G::alloc_() {
    C_S__5e__22_G* o = rt::make<C_S__5e__22_G>();
    return o;
}
rt::Value C_S__5e__22_G::mk_(rt::Value* a, int n) {
    C_S__5e__22_G* o = alloc_();
    o->C_S__5e__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__5e__22_G::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__5e__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__5e__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__5e__22_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_G__id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22_D::ctor_() {
    RT_FN("S__60__22_D.S__60__22_D");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1763 = 1119.0; this->f_S_6_21_Z = rt::touint_d(_v1763); _v1763; });
    ({ double _v1764 = 1.0; this->f_S__60_r = rt::touint_d(_v1764); _v1764; });
    ({ double _v1765 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1765); _v1765; });
    ({ double _v1766 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v1766); _v1766; });
    ({ double _v1767 = 5.0; this->f_S_9_21_m = rt::toint_d(_v1767); _v1767; });
}
rt::Value C_S__60__22_D::m_S__5b__21_C() {
    RT_FN("S__60__22_D.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1768 = rt::arr_lit({rt::V((double)(g::SV.C_S__2c__22__3d___id)), rt::V((double)(g::SV.C_S__3d__22_A__id)), rt::V((double)(g::SV.C_S__23__22_B__id))}); this->f_S_3_3f_ = _v1768; _v1768; });
    return rt::NUL;
}
C_S__60__22_D* C_S__60__22_D::alloc_() {
    C_S__60__22_D* o = rt::make<C_S__60__22_D>();
    return o;
}
rt::Value C_S__60__22_D::mk_(rt::Value* a, int n) {
    C_S__60__22_D* o = alloc_();
    o->C_S__60__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__60__22_D::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__60__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__60__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__60__22_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_D__id)); return true;
    default: return false;
    }
}
bool C_S__60__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22_G::ctor_() {
    RT_FN("S__60__22_G.S__60__22_G");
    (void)((this->C_S_1_22__3e_::ctor_(), rt::NUL));
    ({ double _v1769 = 1191.0; this->f_S_6_21_Z = rt::touint_d(_v1769); _v1769; });
    ({ bool _v1770 = true; this->f_S__5d__22_G = _v1770; _v1770; });
    ({ double _v1771 = 0.0; this->f_S__60_r = rt::touint_d(_v1771); _v1771; });
    ({ double _v1772 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1772); _v1772; });
    ({ double _v1773 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1773); _v1773; });
}
rt::Value C_S__60__22_G::m_S__5b__21_C() {
    RT_FN("S__60__22_G.S__5b__21_C");
    (void)(this->C_S_1_22__3e_::m_S__5b__21_C());
    ({ rt::Value _v1774 = rt::arr_lit({rt::V((double)(g::SV.C_S_4_22__3c___id)), rt::V((double)(g::SV.C_S__3d__22__3c___id)), rt::V((double)(g::SV.C_S__3e__22_C__id))}); this->f_S_3_3f_ = _v1774; _v1774; });
    return rt::NUL;
}
C_S__60__22_G* C_S__60__22_G::alloc_() {
    C_S__60__22_G* o = rt::make<C_S__60__22_G>();
    return o;
}
rt::Value C_S__60__22_G::mk_(rt::Value* a, int n) {
    C_S__60__22_G* o = alloc_();
    o->C_S__60__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_22__3e_::dget(id, out);
}
bool C_S__60__22_G::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_1_22__3e_::dset(id, v);
}
bool C_S__60__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    default: break;
    }
    return C_S_1_22__3e_::dcall(id, a, n, out);
}
bool C_S__60__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    default: break;
    }
    return C_S_1_22__3e_::dmeth(id);
}
bool C_S__60__22_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_G__id)); return true;
    default: return false;
    }
}
bool C_S__60__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_V::ctor_() {
    RT_FN("S__20__21_V.S__20__21_V");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1775 = 226.0; this->f_S_6_21_Z = rt::touint_d(_v1775); _v1775; });
    ({ rt::Value _v1776 = rt::trv(rt::VS(g::LS[778])); this->f_S_1i = rt::slot_string(_v1776); _v1776; });
    ({ rt::Value _v1777 = rt::VS(g::LS[779]); this->f_S__5e__21__23_ = rt::slot_string(_v1777); _v1777; });
    ({ double _v1778 = 2.5e+67; this->f_S__3e__3d_ = _v1778; _v1778; });
    ({ double _v1779 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1779); _v1779; });
    ({ double _v1780 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1780); _v1780; });
    ({ bool _v1781 = true; this->f_S__3c__60_ = _v1781; _v1781; });
    ({ double _v1782 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1782); _v1782; });
}
rt::Value C_S__20__21_V::m_S__40__22_() {
    RT_FN("S__20__21_V.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[780]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_V::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__20__21_V::g_S__2d_6() {
    RT_FN("S__20__21_V.S__2d_6_get");
    return ({ bool _t1783 = C_S_8G::sm_S_7d(g::SV.C_S__3f__21_F__id); _t1783 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t1783; });
    return false;
}
double C_S__20__21_V::sm_S__22__21__26_() {
    RT_FN("S__20__21_V.S__22__21__26_");
    return (30.0 + (0.7 * rt::m_pow(C_S__26_c::sm_S__27__22_I(rt::toint_d(2.0), C_S__26_c::dsm_S__27__22_I_1(), C_S__26_c::dsm_S__27__22_I_2()), 0.7)));
    return 0.0;
}
C_S__20__21_V* C_S__20__21_V::alloc_() {
    C_S__20__21_V* o = rt::make<C_S__20__21_V>();
    return o;
}
rt::Value C_S__20__21_V::mk_(rt::Value* a, int n) {
    C_S__20__21_V* o = alloc_();
    o->C_S__20__21_V::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__21_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__21_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__21_V::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__20__21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_V__id)); return true;
    case NM_ids: out = g::SV.C_S__20__21_V__ids; return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_V__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20__21_V__ids = v; return true;
    default: return false;
    }
}
bool C_S__20__21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2c__22_0::ctor_() {
    RT_FN("S__2c__22_0.S__2c__22_0");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1784 = 982.0; this->f_S_6_21_Z = rt::touint_d(_v1784); _v1784; });
    ({ rt::Value _v1785 = rt::trv(rt::VS(g::LS[782])); this->f_S_1i = rt::slot_string(_v1785); _v1785; });
    ({ rt::Value _v1786 = rt::VS(g::LS[783]); this->f_S__5e__21__23_ = rt::slot_string(_v1786); _v1786; });
    ({ double _v1787 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1787); _v1787; });
    ({ double _v1788 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1788); _v1788; });
    ({ bool _v1789 = true; this->f_S__21__21_n = _v1789; _v1789; });
    ({ double _v1790 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1790); _v1790; });
    ({ bool _v1791 = false; this->f_S_3e = _v1791; _v1791; });
}
rt::Value C_S__2c__22_0::m_S__40__22_() {
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    uint32_t l_A__loc2_ = 0u;
    RT_FN("S__2c__22_0.S__40__22_");
    (l_A__loc3_ = rt::NUL);
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[784]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[785]), C_S__26_c::sm_S_8_21_Z(((((double)(this->f_S_5_22_8)) == 0.0) ? C_S__2c__22_0::sm_S__2c__21_G() : C_S__21__22_8::sm_S__2c__21_G()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc2_ = ((((double)(this->f_S_5_22_8)) == 0.0) ? g::SV.C_S__23__21__21___S__27__22__2b_ : g::SV.C_S__23__21__21___S__3d__22_7));
    if ((!(((double)(l_A__loc2_)) == 0.0))) {
        (l_A__loc3_ = C_S_8G::sm_S__23__21__5d_(l_A__loc2_));
        if ((!rt::eq(l_A__loc3_, rt::NUL))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[8]))));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, ({ rt::Value _o1792 = l_A__loc3_; C_S__60_6* _p1793 = rt::as_ptr<C_S__60_6>(_o1792); _p1793 ? _p1793->m_S_1_21_P() : rt::dcallv(_o1792, NM_S_1_21_P); }))));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[786]))));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, ({ rt::Value _o1794 = l_A__loc3_; C_S__60_6* _p1795 = rt::as_ptr<C_S__60_6>(_o1794); _p1795 ? _p1795->m_S__40__22_() : rt::dcallv(_o1794, NM_S__40__22_); }))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__2c__22_0::g_S__2d_6() {
    RT_FN("S__2c__22_0.S__2d_6_get");
    return ({ bool _t1799 = ({ bool _t1798 = ({ bool _t1797 = ({ bool _t1796 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t1796 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)) : _t1796; }); _t1797 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__20__22__2d___id)) : _t1797; }); _t1798 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) : _t1798; }); _t1799 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 170.0)) : _t1799; });
    return false;
}
double C_S__2c__22_0::sm_S_2_5d_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__2c__22_0.S_2_5d_");
    if ((({ bool _t1804 = (((double)(({ rt::Value _o1800 = l_param1; C_S__60_6* _p1801 = rt::as_ptr<C_S__60_6>(_o1800); _p1801 ? _p1801->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1800, NM_S__2d__21__5e_)); }))) == 13.0); _t1804 ? _t1804 : (bool)((((double)(({ rt::Value _o1802 = l_param1; C_S__60_6* _p1803 = rt::as_ptr<C_S__60_6>(_o1802); _p1803 ? _p1803->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1802, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o1805 = l_param1; C_S__60_6* _p1806 = rt::as_ptr<C_S__60_6>(_o1805); _p1806 ? _p1806->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1805, NM_S__2d__21__5e_)); }))) == 15.0))) {
        return 1e+121;
    }
    if ((({ bool _t1811 = (((double)(({ rt::Value _o1807 = l_param1; C_S__60_6* _p1808 = rt::as_ptr<C_S__60_6>(_o1807); _p1808 ? _p1808->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1807, NM_S__2d__21__5e_)); }))) == 9.0); _t1811 ? _t1811 : (bool)((((double)(({ rt::Value _o1809 = l_param1; C_S__60_6* _p1810 = rt::as_ptr<C_S__60_6>(_o1809); _p1810 ? _p1810->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1809, NM_S__2d__21__5e_)); }))) == 10.0)); }) || (((double)(({ rt::Value _o1812 = l_param1; C_S__60_6* _p1813 = rt::as_ptr<C_S__60_6>(_o1812); _p1813 ? _p1813->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1812, NM_S__2d__21__5e_)); }))) == 12.0))) {
        return 1e+113;
    }
    return 1e+105;
    return 0.0;
}
double C_S__2c__22_0::sm_S_6e(rt::Value p0, int32_t p1) {
    rt::Value l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__2c__22_0.S_6e");
    if ((({ bool _t1818 = (((double)(({ rt::Value _o1814 = l_param1; C_S__60_6* _p1815 = rt::as_ptr<C_S__60_6>(_o1814); _p1815 ? _p1815->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1814, NM_S__2d__21__5e_)); }))) == 13.0); _t1818 ? _t1818 : (bool)((((double)(({ rt::Value _o1816 = l_param1; C_S__60_6* _p1817 = rt::as_ptr<C_S__60_6>(_o1816); _p1817 ? _p1817->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1816, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o1819 = l_param1; C_S__60_6* _p1820 = rt::as_ptr<C_S__60_6>(_o1819); _p1820 ? _p1820->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1819, NM_S__2d__21__5e_)); }))) == 15.0))) {
        if ((({ bool _t1829 = ({ bool _t1824 = (((double)(({ rt::Value _o1821 = l_param1; C_S__60_6* _p1822 = rt::as_ptr<C_S__60_6>(_o1821); _p1822 ? _p1822->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1821, NM_S__2d__21__5e_)); }))) == 13.0); _t1824 ? (bool)((({ bool _t1823 = (((double)(l_param2)) == 2.0); _t1823 ? _t1823 : (bool)((((double)(l_param2)) == 4.0)); }))) : _t1824; }); _t1829 ? _t1829 : (bool)(({ bool _t1828 = (((double)(({ rt::Value _o1825 = l_param1; C_S__60_6* _p1826 = rt::as_ptr<C_S__60_6>(_o1825); _p1826 ? _p1826->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1825, NM_S__2d__21__5e_)); }))) == 14.0); _t1828 ? (bool)((({ bool _t1827 = (((double)(l_param2)) == 0.0); _t1827 ? _t1827 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t1828; })); }) || ((((double)(({ rt::Value _o1830 = l_param1; C_S__60_6* _p1831 = rt::as_ptr<C_S__60_6>(_o1830); _p1831 ? _p1831->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1830, NM_S__2d__21__5e_)); }))) == 15.0) && ((((double)(l_param2)) == 1.0) || (((double)(l_param2)) == 3.0))))) {
            return g::SV.C_S__2c__22_0__S__25__22__2b_;
        }
        return 0.0;
    }
    if ((((double)(({ rt::Value _o1832 = l_param1; C_S__60_6* _p1833 = rt::as_ptr<C_S__60_6>(_o1832); _p1833 ? _p1833->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1832, NM_S__2d__21__5e_)); }))) == 12.0)) {
        if (((((double)(l_param2)) == 9.0) || (((double)(l_param2)) == 10.0))) {
            return g::SV.C_S__2c__22_0__S__25__22__2b_;
        }
        return 0.0;
    }
    if ((({ bool _t1849 = ({ bool _t1844 = ({ bool _t1839 = ({ bool _t1838 = ({ bool _t1837 = ({ bool _t1836 = (((double)(l_param2)) == ((double)(({ rt::Value _o1834 = l_param1; C_S__60_6* _p1835 = rt::as_ptr<C_S__60_6>(_o1834); _p1835 ? _p1835->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1834, NM_S__2d__21__5e_)); })))); _t1836 ? (bool)((!(((double)(l_param2)) == 6.0))) : _t1836; }); _t1837 ? (bool)((!(((double)(l_param2)) == 7.0))) : _t1837; }); _t1838 ? (bool)((!(((double)(l_param2)) == 8.0))) : _t1838; }); _t1839 ? (bool)((!(((double)(l_param2)) == 12.0))) : _t1839; }); _t1844 ? _t1844 : (bool)(({ bool _t1843 = (((double)(({ rt::Value _o1840 = l_param1; C_S__60_6* _p1841 = rt::as_ptr<C_S__60_6>(_o1840); _p1841 ? _p1841->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1840, NM_S__2d__21__5e_)); }))) == 6.0); _t1843 ? (bool)((({ bool _t1842 = (((double)(l_param2)) == 2.0); _t1842 ? _t1842 : (bool)((((double)(l_param2)) == 3.0)); }))) : _t1843; })); }); _t1849 ? _t1849 : (bool)(({ bool _t1848 = (((double)(({ rt::Value _o1845 = l_param1; C_S__60_6* _p1846 = rt::as_ptr<C_S__60_6>(_o1845); _p1846 ? _p1846->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1845, NM_S__2d__21__5e_)); }))) == 7.0); _t1848 ? (bool)((({ bool _t1847 = (((double)(l_param2)) == 1.0); _t1847 ? _t1847 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t1848; })); }) || ((((double)(({ rt::Value _o1850 = l_param1; C_S__60_6* _p1851 = rt::as_ptr<C_S__60_6>(_o1850); _p1851 ? _p1851->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1850, NM_S__2d__21__5e_)); }))) == 8.0) && ((((double)(l_param2)) == 0.0) || (((double)(l_param2)) == 4.0))))) {
        return g::SV.C_S__2c__22_0__S__25__22__2b_;
    }
    return 0.0;
    return 0.0;
}
double C_S__2c__22_0::sm_S__2c__21_G() {
    RT_FN("S__2c__22_0.S__2c__21_G");
    return ((((double)(g::SV.C_S__23__21__21___S__27__22__2b_)) == 0.0) ? 0.0 : (400.0 * C_S__26_c::sm_S_0_21_C(({ rt::Value _o1852 = C_S_8G::sm_S__23__21__5d_(g::SV.C_S__23__21__21___S__27__22__2b_); C_S__60_6* _p1853 = rt::as_ptr<C_S__60_6>(_o1852); _p1853 ? _p1853->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1852, NM_S__2d__21__5e_)); }), true, C_S__26_c::dsm_S_0_21_C_2())));
    return 0.0;
}
C_S__2c__22_0* C_S__2c__22_0::alloc_() {
    C_S__2c__22_0* o = rt::make<C_S__2c__22_0>();
    return o;
}
rt::Value C_S__2c__22_0::mk_(rt::Value* a, int n) {
    C_S__2c__22_0* o = alloc_();
    o->C_S__2c__22_0::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_5_22_8: out = rt::V((double)(f_S_5_22_8)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22_8: f_S_5_22_8 = rt::touint(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_5_22_8: { rt::Value f = rt::V((double)(f_S_5_22_8)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_5_22_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22_0::smeth_(int id) {
    switch (id) {
    case NM_S_2_5d_: return true;
    case NM_S_6e: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2c__22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__25__22__2b_: out = rt::V(g::SV.C_S__2c__22_0__S__25__22__2b_); return true;
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_0__id)); return true;
    case NM_S_2_5d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__25__22__2b_: g::SV.C_S__2c__22_0__S__25__22__2b_ = rt::tonum(v); return true;
    case NM_id: g::SV.C_S__2c__22_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_5d_: out = rt::V(sm_S_2_5d_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S_6e: out = rt::V(sm_S_6e(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__21__22_8::ctor_() {
    RT_FN("S__21__22_8.S__21__22_8");
    (void)((this->C_S__2c__22_0::ctor_(), rt::NUL));
    ({ double _v1854 = 1069.0; this->f_S_6_21_Z = rt::touint_d(_v1854); _v1854; });
    ({ rt::Value _v1855 = rt::trv(rt::VS(g::LS[787])); this->f_S_1i = rt::slot_string(_v1855); _v1855; });
    ({ double _v1856 = 1.0; this->f_S_5_22_8 = rt::touint_d(_v1856); _v1856; });
}
bool C_S__21__22_8::g_S__2d_6() {
    RT_FN("S__21__22_8.S__2d_6_get");
    return ({ bool _t1857 = this->C_S__2c__22_0::g_S__2d_6(); _t1857 ? (bool)(C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__23__22_8__id)) : _t1857; });
    return false;
}
double C_S__21__22_8::sm_S__2c__21_G() {
    RT_FN("S__21__22_8.S__2c__21_G");
    return ((((double)(g::SV.C_S__23__21__21___S__3d__22_7)) == 0.0) ? 0.0 : (400.0 * C_S__26_c::sm_S_0_21_C(({ rt::Value _o1858 = C_S_8G::sm_S__23__21__5d_(g::SV.C_S__23__21__21___S__3d__22_7); C_S__60_6* _p1859 = rt::as_ptr<C_S__60_6>(_o1858); _p1859 ? _p1859->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1858, NM_S__2d__21__5e_)); }), true, C_S__26_c::dsm_S_0_21_C_2())));
    return 0.0;
}
C_S__21__22_8* C_S__21__22_8::alloc_() {
    C_S__21__22_8* o = rt::make<C_S__21__22_8>();
    return o;
}
rt::Value C_S__21__22_8::mk_(rt::Value* a, int n) {
    C_S__21__22_8* o = alloc_();
    o->C_S__21__22_8::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__2c__22_0::dget(id, out);
}
bool C_S__21__22_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__2c__22_0::dset(id, v);
}
bool C_S__21__22_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2c__22_0::dcall(id, a, n, out);
}
bool C_S__21__22_8::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__2c__22_0::dmeth(id);
}
bool C_S__21__22_8::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__21__22_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_8__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__21_v::ctor_() {
    RT_FN("S__21_v.S__21_v");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1860 = 235.0; this->f_S_6_21_Z = rt::touint_d(_v1860); _v1860; });
    ({ rt::Value _v1861 = rt::trv(rt::VS(g::LS[788])); this->f_S_1i = rt::slot_string(_v1861); _v1861; });
    ({ rt::Value _v1862 = rt::VS(g::LS[789]); this->f_S__5e__21__23_ = rt::slot_string(_v1862); _v1862; });
    ({ rt::Value _v1863 = rt::trv(rt::VS(g::LS[790])); this->f_S_7_23_ = rt::slot_string(_v1863); _v1863; });
    ({ double _v1864 = 1e+72; this->f_S__3e__3d_ = _v1864; _v1864; });
    ({ double _v1865 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1865); _v1865; });
    ({ double _v1866 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1866); _v1866; });
    ({ double _v1867 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v1867); _v1867; });
}
rt::Value C_S__21_v::m_S_6r() {
    RT_FN("S__21_v.S_6r");
    (void)(({ rt::Value _o1868 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p1869 = rt::as_ptr<C_S__20_g>(_o1868); _p1869 ? _p1869->m_S__26__2b_(rt::toint_d(912.0), rt::toint_d(0.0)) : rt::dcallv(_o1868, NM_S__26__2b_, rt::V(912.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o1870 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p1871 = rt::as_ptr<C_S_8G>(_o1870); _p1871 ? _p1871->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__3f__21_Z__id)) : rt::dcallv(_o1870, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__3f__21_Z__id)); }));
    return rt::NUL;
}
bool C_S__21_v::g_S__2d_6() {
    RT_FN("S__21_v.S__2d_6_get");
    return ({ bool _t1872 = C_S_8G::sm_S__3c_P(g::SV.C_S__3e_L__id); _t1872 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S__3f__21_Z__id))) : _t1872; });
    return false;
}
C_S__21_v* C_S__21_v::alloc_() {
    C_S__21_v* o = rt::make<C_S__21_v>();
    return o;
}
rt::Value C_S__21_v::mk_(rt::Value* a, int n) {
    C_S__21_v* o = alloc_();
    o->C_S__21_v::ctor_();
    return rt::VO(o);
}
bool C_S__21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21_v::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_v__id)); return true;
    case NM_ids: out = g::SV.C_S__21_v__ids; return true;
    default: return false;
    }
}
bool C_S__21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_v__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21_v__ids = v; return true;
    default: return false;
    }
}
bool C_S__21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22_0::ctor_() {
    RT_FN("S__25__22_0.S__25__22_0");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1873 = 980.0; this->f_S_6_21_Z = rt::touint_d(_v1873); _v1873; });
    ({ rt::Value _v1874 = rt::trv(rt::VS(g::LS[792])); this->f_S_1i = rt::slot_string(_v1874); _v1874; });
    ({ rt::Value _v1875 = rt::VS(g::LS[793]); this->f_S__5e__21__23_ = rt::slot_string(_v1875); _v1875; });
    ({ double _v1876 = 1.0; this->f_S__23__22__2d_ = _v1876; _v1876; });
    ({ bool _v1877 = true; this->f_S__25__21__3e_ = _v1877; _v1877; });
    ({ bool _v1878 = true; this->f_S__3f_T = _v1878; _v1878; });
    ({ double _v1879 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1879); _v1879; });
    ({ bool _v1880 = false; this->f_S_3e = _v1880; _v1880; });
}
rt::Value C_S__25__22_0::m_S__40__22_() {
    RT_FN("S__25__22_0.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[794])), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[795]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22_0__S_7m, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[796]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22_0__S__27__21_I, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[797]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22_0__S__2c__26_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[798]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22_0__S_9x, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[799]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22_0__S__3c__21_Y, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__25__22_0::m_S_6r() {
    RT_FN("S__25__22_0.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o1881 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p1882 = rt::as_ptr<C_S__20_g>(_o1881); _p1882 ? _p1882->m_S__26__2b_(rt::toint_d(960.0), rt::toint_d(0.0)) : rt::dcallv(_o1881, NM_S__26__2b_, rt::V(960.0), rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S__25__22_0::g_S__2d_6() {
    RT_FN("S__25__22_0.S__2d_6_get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 3.0);
    return false;
}
bool C_S__25__22_0::g_S_9_21__25_() {
    RT_FN("S__25__22_0.S_9_21__25__get");
    return ({ bool _t1886 = ({ bool _t1885 = ({ bool _t1884 = ({ bool _t1883 = (C_S__26_c::sm_S__5e__21_r(rt::toint_d(15.0), C_S__26_c::dsm_S__5e__21_r_1(), C_S__26_c::dsm_S__5e__21_r_2()) >= g::SV.C_S__25__22_0__S_7m); _t1883 ? (bool)((C_S__26_c::sm_S__5e__21_r(rt::toint_d(4.0), C_S__26_c::dsm_S__5e__21_r_1(), C_S__26_c::dsm_S__5e__21_r_2()) >= g::SV.C_S__25__22_0__S__27__21_I)) : _t1883; }); _t1884 ? (bool)((C_S__26_c::sm_S__40__21__5b_(false, false, true) >= g::SV.C_S__25__22_0__S__2c__26_)) : _t1884; }); _t1885 ? (bool)((C_S__26_c::sm_S__20__21_q(rt::toint_d(12.0), C_S__26_c::dsm_S__20__21_q_1(), C_S__26_c::dsm_S__20__21_q_2()) >= g::SV.C_S__25__22_0__S_9x)) : _t1885; }); _t1886 ? (bool)((C_S__26_c::sm_S__20__21_q(rt::toint_d(96.0), C_S__26_c::dsm_S__20__21_q_1(), C_S__26_c::dsm_S__20__21_q_2()) >= g::SV.C_S__25__22_0__S__3c__21_Y)) : _t1886; });
    return false;
}
bool C_S__25__22_0::g_S__26_8() {
    RT_FN("S__25__22_0.S__26_8_get");
    return false;
    return false;
}
C_S__25__22_0* C_S__25__22_0::alloc_() {
    C_S__25__22_0* o = rt::make<C_S__25__22_0>();
    return o;
}
rt::Value C_S__25__22_0::mk_(rt::Value* a, int n) {
    C_S__25__22_0* o = alloc_();
    o->C_S__25__22_0::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_0__id)); return true;
    case NM_S_7m: out = rt::V(g::SV.C_S__25__22_0__S_7m); return true;
    case NM_S__27__21_I: out = rt::V(g::SV.C_S__25__22_0__S__27__21_I); return true;
    case NM_S__2c__26_: out = rt::V(g::SV.C_S__25__22_0__S__2c__26_); return true;
    case NM_S_9x: out = rt::V(g::SV.C_S__25__22_0__S_9x); return true;
    case NM_S__3c__21_Y: out = rt::V(g::SV.C_S__25__22_0__S__3c__21_Y); return true;
    default: return false;
    }
}
bool C_S__25__22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_0__id = rt::touint(v); return true;
    case NM_S_7m: g::SV.C_S__25__22_0__S_7m = rt::tonum(v); return true;
    case NM_S__27__21_I: g::SV.C_S__25__22_0__S__27__21_I = rt::tonum(v); return true;
    case NM_S__2c__26_: g::SV.C_S__25__22_0__S__2c__26_ = rt::tonum(v); return true;
    case NM_S_9x: g::SV.C_S__25__22_0__S_9x = rt::tonum(v); return true;
    case NM_S__3c__21_Y: g::SV.C_S__25__22_0__S__3c__21_Y = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_F::ctor_() {
    RT_FN("S__3f__21_F.S__3f__21_F");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1887 = 230.0; this->f_S_6_21_Z = rt::touint_d(_v1887); _v1887; });
    ({ rt::Value _v1888 = rt::trv(rt::VS(g::LS[800])); this->f_S_1i = rt::slot_string(_v1888); _v1888; });
    ({ rt::Value _v1889 = rt::VS(g::LS[801]); this->f_S__5e__21__23_ = rt::slot_string(_v1889); _v1889; });
    ({ rt::Value _v1890 = rt::VS(g::LS[802]); this->f_S__3f__21__3d_ = rt::slot_string(_v1890); _v1890; });
    ({ rt::Value _v1891 = rt::VS(g::LS[802]); this->f_S__40_1 = rt::slot_string(_v1891); _v1891; });
    ({ rt::Value _v1892 = rt::trv(rt::VS(g::LS[803])); this->f_S_7_23_ = rt::slot_string(_v1892); _v1892; });
    ({ double _v1893 = 2.5e+64; this->f_S__3e__3d_ = _v1893; _v1893; });
    ({ double _v1894 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1894); _v1894; });
    ({ double _v1895 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1895); _v1895; });
    ({ bool _v1896 = true; this->f_S__3c__60_ = _v1896; _v1896; });
    ({ double _v1897 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1897); _v1897; });
}
bool C_S__3f__21_F::g_S__2d_6() {
    RT_FN("S__3f__21_F.S__2d_6_get");
    return (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0);
    return false;
}
C_S__3f__21_F* C_S__3f__21_F::alloc_() {
    C_S__3f__21_F* o = rt::make<C_S__3f__21_F>();
    return o;
}
rt::Value C_S__3f__21_F::mk_(rt::Value* a, int n) {
    C_S__3f__21_F* o = alloc_();
    o->C_S__3f__21_F::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__21_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__21_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__21_F::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__21_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_F__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21_F__ids; return true;
    default: return false;
    }
}
bool C_S__3f__21_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_F__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21_F__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22__2d_::ctor_() {
    RT_FN("S__2c__22__2d_.S__2c__22__2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1898 = 979.0; this->f_S_6_21_Z = rt::touint_d(_v1898); _v1898; });
    ({ rt::Value _v1899 = rt::trv(rt::VS(g::LS[805])); this->f_S_1i = rt::slot_string(_v1899); _v1899; });
    ({ rt::Value _v1900 = rt::VS(g::LS[806]); this->f_S__5e__21__23_ = rt::slot_string(_v1900); _v1900; });
    ({ rt::Value _v1901 = rt::VS(g::LS[802]); this->f_S__3f__21__3d_ = rt::slot_string(_v1901); _v1901; });
    ({ rt::Value _v1902 = rt::VS(g::LS[802]); this->f_S__40_1 = rt::slot_string(_v1902); _v1902; });
    ({ rt::Value _v1903 = rt::trv(rt::VS(g::LS[155])); this->f_S_7_23_ = rt::slot_string(_v1903); _v1903; });
    ({ double _v1904 = 1e+100; this->f_S__23__22__2d_ = _v1904; _v1904; });
    ({ double _v1905 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1905); _v1905; });
    ({ double _v1906 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1906); _v1906; });
    ({ bool _v1907 = true; this->f_S__21__21_n = _v1907; _v1907; });
    ({ double _v1908 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1908); _v1908; });
}
rt::Value C_S__2c__22__2d_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__2c__22__2d_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[807]))));
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[808]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22__2d_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__2c__22__2d_::g_S__2d_6() {
    RT_FN("S__2c__22__2d_.S__2d_6_get");
    return ({ bool _t1909 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t1909 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)) : _t1909; });
    return false;
}
double C_S__2c__22__2d_::sm_S__2c__21_G() {
    RT_FN("S__2c__22__2d_.S__2c__21_G");
    return 1000.0;
    return 0.0;
}
C_S__2c__22__2d_* C_S__2c__22__2d_::alloc_() {
    C_S__2c__22__2d_* o = rt::make<C_S__2c__22__2d_>();
    return o;
}
rt::Value C_S__2c__22__2d_::mk_(rt::Value* a, int n) {
    C_S__2c__22__2d_* o = alloc_();
    o->C_S__2c__22__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22__2d_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2c__22__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__2d___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__2d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_4_21__5b_::ctor_() {
    RT_FN("S_4_21__5b_.S_4_21__5b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1910 = 232.0; this->f_S_6_21_Z = rt::touint_d(_v1910); _v1910; });
    ({ rt::Value _v1911 = rt::trv(rt::VS(g::LS[809])); this->f_S_1i = rt::slot_string(_v1911); _v1911; });
    ({ rt::Value _v1912 = rt::VS(g::LS[810]); this->f_S__5e__21__23_ = rt::slot_string(_v1912); _v1912; });
    ({ rt::Value _v1913 = rt::trv(rt::VS(g::LS[811])); this->f_S_7_23_ = rt::slot_string(_v1913); _v1913; });
    ({ double _v1914 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1914); _v1914; });
    ({ double _v1915 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v1915); _v1915; });
}
double C_S_4_21__5b_::m_S__25__21__3b_() {
    RT_FN("S_4_21__5b_.S__25__21__3b_");
    return (5e+29 * rt::m_pow(rt::m_ceil((rt::tonum((rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)))) / 60.0)), 0.18));
    return 0.0;
}
int32_t C_S_4_21__5b_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_4_21__5b_::dm_S_75_2() { return false; }
rt::Value C_S_4_21__5b_::dm_S_75_3() { return rt::NUL; }
double C_S_4_21__5b_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_4_21__5b_.S_75");
    if ((({ bool _t1921 = ({ bool _t1920 = ({ bool _t1919 = ({ bool _t1918 = ({ bool _t1917 = ({ bool _t1916 = (((double)(l_param1)) == 0.0); _t1916 ? _t1916 : (bool)((((double)(l_param1)) == 1.0)); }); _t1917 ? _t1917 : (bool)((((double)(l_param1)) == 2.0)); }); _t1918 ? _t1918 : (bool)((((double)(l_param1)) == 3.0)); }); _t1919 ? _t1919 : (bool)((((double)(l_param1)) == 4.0)); }); _t1920 ? _t1920 : (bool)((((double)(l_param1)) == 5.0)); }); _t1921 ? _t1921 : (bool)((((double)(l_param1)) == 9.0)); }) || (((double)(l_param1)) == 10.0))) {
        return (50000.0 * rt::m_pow(rt::m_ceil((((1.0 + C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))) / 60.0)), 0.5));
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_4_21__5b_::m_S_6r() {
    RT_FN("S_4_21__5b_.S_6r");
    (void)(({ rt::Value _o1922 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p1923 = rt::as_ptr<C_S_8G>(_o1922); _p1923 ? _p1923->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__3e_L__id)) : rt::dcallv(_o1922, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__3e_L__id)); }));
    return rt::NUL;
}
bool C_S_4_21__5b_::g_S__2d_6() {
    RT_FN("S_4_21__5b_.S__2d_6_get");
    return ({ bool _t1924 = (((double)(C_S_8G::sg_S_8_21_H())) >= 3.0); _t1924 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S__3e_L__id))) : _t1924; });
    return false;
}
double C_S_4_21__5b_::g_S_9_21_U() {
    RT_FN("S_4_21__5b_.S_9_21_U_get");
    return (1e+60 * rt::m_pow(rt::m_ceil((rt::tonum((rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)))) / 60.0)), 3.5));
    return 0.0;
}
C_S_4_21__5b_* C_S_4_21__5b_::alloc_() {
    C_S_4_21__5b_* o = rt::make<C_S_4_21__5b_>();
    return o;
}
rt::Value C_S_4_21__5b_::mk_(rt::Value* a, int n) {
    C_S_4_21__5b_* o = alloc_();
    o->C_S_4_21__5b_::ctor_();
    return rt::VO(o);
}
bool C_S_4_21__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S__25__21__3b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_21__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_21__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__25__21__3b_: out = rt::V(m_S__25__21__3b_()); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_4_21__5b_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_4_21__5b_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_4_21__5b_::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_21__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__25__21__3b_: return true;
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_21__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21__5b___id)); return true;
    case NM_ids: out = g::SV.C_S_4_21__5b___ids; return true;
    default: return false;
    }
}
bool C_S_4_21__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21__5b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_4_21__5b___ids = v; return true;
    default: return false;
    }
}
bool C_S_4_21__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_i::ctor_() {
    RT_FN("S_4_21_i.S_4_21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1925 = 701.0; this->f_S_6_21_Z = rt::touint_d(_v1925); _v1925; });
    ({ rt::Value _v1926 = rt::trv(rt::VS(g::LS[813])); this->f_S_1i = rt::slot_string(_v1926); _v1926; });
    ({ rt::Value _v1927 = rt::VS(g::LS[814]); this->f_S__5e__21__23_ = rt::slot_string(_v1927); _v1927; });
    ({ double _v1928 = 1e+135; this->f_S__3c_R = _v1928; _v1928; });
    ({ double _v1929 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v1929); _v1929; });
    ({ double _v1930 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1930); _v1930; });
    ({ double _v1931 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v1931); _v1931; });
}
rt::Value C_S_4_21_i::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_4_21_i.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((!C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[815])), rt::VS(g::LS[8])))));
    }
    return rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[816]))));
    return rt::NUL;
}
bool C_S_4_21_i::g_S__2d_6() {
    RT_FN("S_4_21_i.S__2d_6_get");
    return ({ bool _t1932 = this->C_S__60_6::g_S__2d_6(); _t1932 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__21_i__id)) : _t1932; });
    return false;
}
double C_S_4_21_i::sm_S__2c__21_G() {
    RT_FN("S_4_21_i.S__2c__21_G");
    return (C_S_2_3c_::sm_S__2c__21_G(30.0) * rt::m_pow(rt::m_log(rt::tonum(rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 130.0)))), 4.0));
    return 0.0;
}
C_S_4_21_i* C_S_4_21_i::alloc_() {
    C_S_4_21_i* o = rt::make<C_S_4_21_i>();
    return o;
}
rt::Value C_S_4_21_i::mk_(rt::Value* a, int n) {
    C_S_4_21_i* o = alloc_();
    o->C_S_4_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_21_i::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_4_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_i__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_6_21__23_::ctor_() {
    RT_FN("S_6_21__23_.S_6_21__23_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1933 = 227.0; this->f_S_6_21_Z = rt::touint_d(_v1933); _v1933; });
    ({ rt::Value _v1934 = rt::trv(rt::VS(g::LS[817])); this->f_S_1i = rt::slot_string(_v1934); _v1934; });
    ({ rt::Value _v1935 = rt::VS(g::LS[818]); this->f_S__5e__21__23_ = rt::slot_string(_v1935); _v1935; });
    ({ double _v1936 = 2.5e+67; this->f_S__3e__3d_ = _v1936; _v1936; });
    ({ double _v1937 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1937); _v1937; });
    ({ double _v1938 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1938); _v1938; });
    ({ bool _v1939 = true; this->f_S__3c__60_ = _v1939; _v1939; });
    ({ double _v1940 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1940); _v1940; });
}
rt::Value C_S_6_21__23_::m_S__40__22_() {
    RT_FN("S_6_21__23_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[819]), C_S__26_c::sm_S_8_21_Z(C_S_6_21__23_::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_6_21__23_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_6_21__23_::g_S__2d_6() {
    RT_FN("S_6_21__23_.S__2d_6_get");
    return ({ bool _t1941 = C_S_8G::sm_S_7d(g::SV.C_S__3f__21_F__id); _t1941 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) : _t1941; });
    return false;
}
double C_S_6_21__23_::sm_S_5_21_B() {
    RT_FN("S_6_21__23_.S_5_21_B");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S_1_21_y(true, C_S__26_c::dsm_S_1_21_y_1()), 0.5));
    return 0.0;
}
double C_S_6_21__23_::sm_S_9L() {
    RT_FN("S_6_21__23_.S_9L");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_1_21_y(true, C_S__26_c::dsm_S_1_21_y_1()))), 1.2));
    return 0.0;
}
C_S_6_21__23_* C_S_6_21__23_::alloc_() {
    C_S_6_21__23_* o = rt::make<C_S_6_21__23_>();
    return o;
}
rt::Value C_S_6_21__23_::mk_(rt::Value* a, int n) {
    C_S_6_21__23_* o = alloc_();
    o->C_S_6_21__23_::ctor_();
    return rt::VO(o);
}
bool C_S_6_21__23_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_21__23_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_21__23_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_21__23_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_21__23_::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_6_21__23_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21__23___id)); return true;
    case NM_ids: out = g::SV.C_S_6_21__23___ids; return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_21__23_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21__23___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_21__23___ids = v; return true;
    default: return false;
    }
}
bool C_S_6_21__23_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_6_21__2b_::ctor_() {
    RT_FN("S_6_21__2b_.S_6_21__2b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1942 = 229.0; this->f_S_6_21_Z = rt::touint_d(_v1942); _v1942; });
    ({ rt::Value _v1943 = rt::trv(rt::VS(g::LS[821])); this->f_S_1i = rt::slot_string(_v1943); _v1943; });
    ({ rt::Value _v1944 = rt::VS(g::LS[822]); this->f_S__5e__21__23_ = rt::slot_string(_v1944); _v1944; });
    ({ rt::Value _v1945 = rt::VS(g::LS[802]); this->f_S__3f__21__3d_ = rt::slot_string(_v1945); _v1945; });
    ({ rt::Value _v1946 = rt::VS(g::LS[802]); this->f_S__40_1 = rt::slot_string(_v1946); _v1946; });
    ({ rt::Value _v1947 = rt::trv(rt::VS(g::LS[155])); this->f_S_7_23_ = rt::slot_string(_v1947); _v1947; });
    ({ double _v1948 = 5e+55; this->f_S__3e__3d_ = _v1948; _v1948; });
    ({ double _v1949 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1949); _v1949; });
    ({ double _v1950 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1950); _v1950; });
    ({ bool _v1951 = true; this->f_S__3c__60_ = _v1951; _v1951; });
    ({ double _v1952 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1952); _v1952; });
    ({ bool _v1953 = false; this->f_S_3e = _v1953; _v1953; });
}
rt::Value C_S_6_21__2b_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_6_21__2b_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[823]))));
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[808]), C_S__26_c::sm_S_8_21_Z(C_S_6_21__2b_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S_6_21__2b_::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S_6_21__2b_.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc1_ = rt::toint_d(49.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v1954 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v1954); });
    ({ rt::Value _v1957 = ({ rt::Value _v1956 = ({ rt::Value _v1955 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(100.0), _v1955); _v1955; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(99.0), _v1956); _v1956; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(38.0), _v1957); });
    (void)(({ rt::Value _o1958 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p1959 = rt::as_ptr<C_S_8G>(_o1958); _p1959 ? _p1959->m_S__27__26_(rt::toint_d(11.0)) : rt::dcallv(_o1958, NM_S__27__26_, rt::V(11.0)); }));
    if ((({ bool _t1960 = C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20__22_8__id); _t1960 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) : _t1960; }) && C_S_8G::sm_S_7d(g::SV.C_S_5_22__2d___id))) {
        ({ uint32_t _v1963 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__3b__21__2b___id); rt::Value _o1961 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p1962 = rt::as_ptr<C_S_84>(_o1961); if (_p1962) _p1962->f_S_6_21_A = ((int32_t)(_v1963)); else rt::dset(_o1961, NM_S_6_21_A, rt::V((double)(_v1963))); _v1963; });
    }
    return rt::NUL;
}
bool C_S_6_21__2b_::g_S__2d_6() {
    RT_FN("S_6_21__2b_.S__2d_6_get");
    if (((((double)(C_S_8G::sg_S__2c_P())) == 2.0) || (((double)(C_S_8G::sg_S__2c_P())) == 4.0))) {
        return false;
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) == 3.0)) {
        return ({ bool _t1966 = ({ bool _t1965 = ({ bool _t1964 = C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id); _t1964 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t1964; }); _t1965 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0))) : _t1965; }); _t1966 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) : _t1966; });
    }
    return ({ bool _t1969 = ({ bool _t1968 = ({ bool _t1967 = C_S_8G::sm_S__3c_P(g::SV.C_S__3f__21_Z__id); _t1967 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t1967; }); _t1968 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) : _t1968; }); _t1969 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t1969; });
    return false;
}
double C_S_6_21__2b_::sm_S__2c__21_G() {
    RT_FN("S_6_21__2b_.S__2c__21_G");
    return 500.0;
    return 0.0;
}
C_S_6_21__2b_* C_S_6_21__2b_::alloc_() {
    C_S_6_21__2b_* o = rt::make<C_S_6_21__2b_>();
    return o;
}
rt::Value C_S_6_21__2b_::mk_(rt::Value* a, int n) {
    C_S_6_21__2b_* o = alloc_();
    o->C_S_6_21__2b_::ctor_();
    return rt::VO(o);
}
bool C_S_6_21__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_21__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_21__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_21__2b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_21__2b_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_6_21__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21__2b___id)); return true;
    case NM_ids: out = g::SV.C_S_6_21__2b___ids; return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_21__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21__2b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_21__2b___ids = v; return true;
    default: return false;
    }
}
bool C_S_6_21__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3b__21_D::ctor_() {
    RT_FN("S__3b__21_D.S__3b__21_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v1970 = 233.0; this->f_S_6_21_Z = rt::touint_d(_v1970); _v1970; });
    ({ rt::Value _v1971 = rt::trv(rt::VS(g::LS[825])); this->f_S_1i = rt::slot_string(_v1971); _v1971; });
    ({ rt::Value _v1972 = rt::VS(g::LS[826]); this->f_S__5e__21__23_ = rt::slot_string(_v1972); _v1972; });
    ({ double _v1973 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v1973); _v1973; });
    ({ double _v1974 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v1974); _v1974; });
    ({ bool _v1975 = true; this->f_S__3c__60_ = _v1975; _v1975; });
    ({ double _v1976 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v1976); _v1976; });
    ({ bool _v1977 = false; this->f_S_3e = _v1977; _v1977; });
}
rt::Value C_S__3b__21_D::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3b__21_D.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[827]))));
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[828]), C_S__26_c::sm_S_8_21_Z(C_S__3b__21_D::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__3b__21_D::m_S__3e__21__2d_() {
    RT_FN("S__3b__21_D.S__3e__21__2d_");
    return rt::slot_string(rt::VS(g::LS[829]));
    return rt::NUL;
}
bool C_S__3b__21_D::g_S__2d_6() {
    RT_FN("S__3b__21_D.S__2d_6_get");
    return (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0);
    return false;
}
double C_S__3b__21_D::sm_S_2_5d_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__3b__21_D.S_2_5d_");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) {
        return 0.0;
    }
    return ((((double)(g::SV.C_S__3b__21_D__S_9_21__5b_)) == 0.0) ? 5e+58 : 5e+75);
    return 0.0;
}
double C_S__3b__21_D::sm_S_6e(rt::Value p0, int32_t p1) {
    rt::Value l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__3b__21_D.S_6e");
    if ((({ bool _t1982 = (((double)(({ rt::Value _o1978 = l_param1; C_S_84* _p1979 = rt::as_ptr<C_S_84>(_o1978); _p1979 ? _p1979->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1978, NM_S__2d__21__5e_)); }))) == 13.0); _t1982 ? _t1982 : (bool)((((double)(({ rt::Value _o1980 = l_param1; C_S_84* _p1981 = rt::as_ptr<C_S_84>(_o1980); _p1981 ? _p1981->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1980, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o1983 = l_param1; C_S_84* _p1984 = rt::as_ptr<C_S_84>(_o1983); _p1984 ? _p1984->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1983, NM_S__2d__21__5e_)); }))) == 15.0))) {
        if ((({ bool _t1993 = ({ bool _t1988 = (((double)(({ rt::Value _o1985 = l_param1; C_S_84* _p1986 = rt::as_ptr<C_S_84>(_o1985); _p1986 ? _p1986->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1985, NM_S__2d__21__5e_)); }))) == 13.0); _t1988 ? (bool)((({ bool _t1987 = (((double)(l_param2)) == 2.0); _t1987 ? _t1987 : (bool)((((double)(l_param2)) == 4.0)); }))) : _t1988; }); _t1993 ? _t1993 : (bool)(({ bool _t1992 = (((double)(({ rt::Value _o1989 = l_param1; C_S_84* _p1990 = rt::as_ptr<C_S_84>(_o1989); _p1990 ? _p1990->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1989, NM_S__2d__21__5e_)); }))) == 14.0); _t1992 ? (bool)((({ bool _t1991 = (((double)(l_param2)) == 0.0); _t1991 ? _t1991 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t1992; })); }) || ((((double)(({ rt::Value _o1994 = l_param1; C_S_84* _p1995 = rt::as_ptr<C_S_84>(_o1994); _p1995 ? _p1995->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1994, NM_S__2d__21__5e_)); }))) == 15.0) && ((((double)(l_param2)) == 1.0) || (((double)(l_param2)) == 3.0))))) {
            return ((((double)(g::SV.C_S__3b__21_D__S_9_21__5b_)) == 0.0) ? 1e+30 : 1e+38);
        }
        return 0.0;
    }
    if ((((double)(({ rt::Value _o1996 = l_param1; C_S_84* _p1997 = rt::as_ptr<C_S_84>(_o1996); _p1997 ? _p1997->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1996, NM_S__2d__21__5e_)); }))) == 12.0)) {
        if (((((double)(l_param2)) == 9.0) || (((double)(l_param2)) == 10.0))) {
            return ((((double)(g::SV.C_S__3b__21_D__S_9_21__5b_)) == 0.0) ? 10000.0 : 1000000.0);
        }
        return 0.0;
    }
    if ((({ bool _t2013 = ({ bool _t2008 = ({ bool _t2003 = ({ bool _t2002 = ({ bool _t2001 = ({ bool _t2000 = (((double)(l_param2)) == ((double)(({ rt::Value _o1998 = l_param1; C_S_84* _p1999 = rt::as_ptr<C_S_84>(_o1998); _p1999 ? _p1999->f_S__2d__21__5e_ : rt::toint(rt::dget(_o1998, NM_S__2d__21__5e_)); })))); _t2000 ? (bool)((!(((double)(l_param2)) == 6.0))) : _t2000; }); _t2001 ? (bool)((!(((double)(l_param2)) == 7.0))) : _t2001; }); _t2002 ? (bool)((!(((double)(l_param2)) == 8.0))) : _t2002; }); _t2003 ? (bool)((!(((double)(l_param2)) == 12.0))) : _t2003; }); _t2008 ? _t2008 : (bool)(({ bool _t2007 = (((double)(({ rt::Value _o2004 = l_param1; C_S_84* _p2005 = rt::as_ptr<C_S_84>(_o2004); _p2005 ? _p2005->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2004, NM_S__2d__21__5e_)); }))) == 6.0); _t2007 ? (bool)((({ bool _t2006 = (((double)(l_param2)) == 2.0); _t2006 ? _t2006 : (bool)((((double)(l_param2)) == 3.0)); }))) : _t2007; })); }); _t2013 ? _t2013 : (bool)(({ bool _t2012 = (((double)(({ rt::Value _o2009 = l_param1; C_S_84* _p2010 = rt::as_ptr<C_S_84>(_o2009); _p2010 ? _p2010->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2009, NM_S__2d__21__5e_)); }))) == 7.0); _t2012 ? (bool)((({ bool _t2011 = (((double)(l_param2)) == 1.0); _t2011 ? _t2011 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t2012; })); }) || ((((double)(({ rt::Value _o2014 = l_param1; C_S_84* _p2015 = rt::as_ptr<C_S_84>(_o2014); _p2015 ? _p2015->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2014, NM_S__2d__21__5e_)); }))) == 8.0) && ((((double)(l_param2)) == 0.0) || (((double)(l_param2)) == 4.0))))) {
        return ((((double)(g::SV.C_S__3b__21_D__S_9_21__5b_)) == 0.0) ? 5000.0 : 250000.0);
    }
    return 0.0;
    return 0.0;
}
double C_S__3b__21_D::sm_S__2c__21_G() {
    RT_FN("S__3b__21_D.S__2c__21_G");
    return ((((double)(g::SV.C_S__23__21__21___S__5d__21_L)) == 0.0) ? 0.0 : rt::m_min2(5000.0, (1000.0 + (5.0 * rt::m_pow(C_S__26_c::sm_S_7i(({ rt::Value _o2016 = C_S_8G::sm_S__2d_a(g::SV.C_S__23__21__21___S__5d__21_L); C_S_84* _p2017 = rt::as_ptr<C_S_84>(_o2016); _p2017 ? _p2017->f_id : rt::touint(rt::dget(_o2016, NM_id)); }), C_S__26_c::dsm_S_7i_1(), C_S__26_c::dsm_S_7i_2(), C_S__26_c::dsm_S_7i_3()), 0.5)))));
    return 0.0;
}
C_S__3b__21_D* C_S__3b__21_D::alloc_() {
    C_S__3b__21_D* o = rt::make<C_S__3b__21_D>();
    return o;
}
rt::Value C_S__3b__21_D::mk_(rt::Value* a, int n) {
    C_S__3b__21_D* o = alloc_();
    o->C_S__3b__21_D::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_D::smeth_(int id) {
    switch (id) {
    case NM_S_2_5d_: return true;
    case NM_S_6e: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3b__21_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__5b_: out = rt::V((double)(g::SV.C_S__3b__21_D__S_9_21__5b_)); return true;
    case NM_S_2_5d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__5b_: g::SV.C_S__3b__21_D__S_9_21__5b_ = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_5d_: out = rt::V(sm_S_2_5d_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S_6e: out = rt::V(sm_S_6e(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_7c::ctor_() {
    RT_FN("S_7c.S_7c");
    (void)((this->C_S__3b__21_D::ctor_(), rt::NUL));
    ({ double _v2018 = 234.0; this->f_S_6_21_Z = rt::touint_d(_v2018); _v2018; });
    ({ rt::Value _v2019 = rt::trv(rt::VS(g::LS[830])); this->f_S_1i = rt::slot_string(_v2019); _v2019; });
    ({ rt::Value _v2020 = rt::VS(g::LS[831]); this->f_S__5e__21__23_ = rt::slot_string(_v2020); _v2020; });
    ({ bool _v2021 = true; this->f_S__3c__60_ = _v2021; _v2021; });
    ({ double _v2022 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2022); _v2022; });
}
rt::Value C_S_7c::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_7c.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[827]))));
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[828]), C_S__26_c::sm_S_8_21_Z(C_S_7c::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S_7c::m_S__3e__21__2d_() {
    RT_FN("S_7c.S__3e__21__2d_");
    return rt::slot_string(rt::VS(g::LS[832]));
    return rt::NUL;
}
bool C_S_7c::g_S__2d_6() {
    RT_FN("S_7c.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__3b_D__id);
    return false;
}
double C_S_7c::sm_S__2c__21_G() {
    RT_FN("S_7c.S__2c__21_G");
    return ((((double)(g::SV.C_S__23__21__21___S_5o)) == 0.0) ? 0.0 : rt::m_min2(5000.0, (1000.0 + (5.0 * rt::m_pow(C_S__26_c::sm_S_7i(({ rt::Value _o2023 = C_S_8G::sm_S__2d_a(g::SV.C_S__23__21__21___S_5o); C_S_84* _p2024 = rt::as_ptr<C_S_84>(_o2023); _p2024 ? _p2024->f_id : rt::touint(rt::dget(_o2023, NM_id)); }), C_S__26_c::dsm_S_7i_1(), C_S__26_c::dsm_S_7i_2(), C_S__26_c::dsm_S_7i_3()), 0.5)))));
    return 0.0;
}
C_S_7c* C_S_7c::alloc_() {
    C_S_7c* o = rt::make<C_S_7c>();
    return o;
}
rt::Value C_S_7c::mk_(rt::Value* a, int n) {
    C_S_7c* o = alloc_();
    o->C_S_7c::ctor_();
    return rt::VO(o);
}
bool C_S_7c::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b__21_D::dget(id, out);
}
bool C_S_7c::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__3b__21_D::dset(id, v);
}
bool C_S_7c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b__21_D::dcall(id, a, n, out);
}
bool C_S_7c::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__3b__21_D::dmeth(id);
}
bool C_S_7c::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_7c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7c::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3b__21_j::ctor_() {
    RT_FN("S__3b__21_j.S__3b__21_j");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v2025 = 703.0; this->f_S_6_21_Z = rt::touint_d(_v2025); _v2025; });
    ({ rt::Value _v2026 = rt::trv(rt::VS(g::LS[833])); this->f_S_1i = rt::slot_string(_v2026); _v2026; });
    ({ rt::Value _v2027 = rt::VS(g::LS[834]); this->f_S__5e__21__23_ = rt::slot_string(_v2027); _v2027; });
    ({ double _v2028 = 1e+135; this->f_S__3c_R = _v2028; _v2028; });
    ({ double _v2029 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v2029); _v2029; });
    ({ double _v2030 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2030); _v2030; });
    ({ double _v2031 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2031); _v2031; });
}
rt::Value C_S__3b__21_j::m_S__40__22_() {
    RT_FN("S__3b__21_j.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[835]), C_S__26_c::sm_S_8_21_Z(C_S__3b__21_j::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3b__21_j::g_S__2d_6() {
    RT_FN("S__3b__21_j.S__2d_6_get");
    return ({ bool _t2032 = this->C_S__60_6::g_S__2d_6(); _t2032 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__21_j__id)) : _t2032; });
    return false;
}
double C_S__3b__21_j::sm_S__2c__21_G() {
    RT_FN("S__3b__21_j.S__2c__21_G");
    return ((C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()) * C_S_2_3c_::sm_S__2c__21_G(30.0)) * rt::m_pow(C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0()), 1.25));
    return 0.0;
}
C_S__3b__21_j* C_S__3b__21_j::alloc_() {
    C_S__3b__21_j* o = rt::make<C_S__3b__21_j>();
    return o;
}
rt::Value C_S__3b__21_j::mk_(rt::Value* a, int n) {
    C_S__3b__21_j* o = alloc_();
    o->C_S__3b__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_j::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3b__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_j__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_j__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3b__3d_::ctor_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3b__3d_.S__3b__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ int32_t _v2033 = l_param1; this->f_S__60_r = _v2033; _v2033; });
    ({ rt::Value _v2034 = rt::trv(rt::VS(g::LS[836]), rt::dcallv(rt::V((double)(this->f_S__60_r)), rt::N_toString)); this->f_S_1i = rt::slot_string(_v2034); _v2034; });
    ({ rt::Value _v2035 = rt::add(rt::VS(g::LS[837]), rt::dcallv(rt::V((double)(this->f_S__60_r)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v2035); _v2035; });
    ({ rt::Value _v2036 = rt::VS(g::LS[837]); this->f_S__3f__21__3d_ = rt::slot_string(_v2036); _v2036; });
    ({ double _v2037 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v2037); _v2037; });
    ({ double _v2038 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2038); _v2038; });
    ({ double _v2039 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2039); _v2039; });
    ({ bool _v2040 = false; this->f_S_3e = _v2040; _v2040; });
    ({ bool _v2041 = (((double)(this->f_S__60_r)) <= 12.0); this->f_S__3c__60_ = _v2041; _v2041; });
    ({ bool _v2042 = (((double)(this->f_S__60_r)) > 12.0); this->f_S__21__21_n = _v2042; _v2042; });
}
rt::Value C_S__3b__3d_::m_S__5b__21_C() {
    RT_FN("S__3b__3d_.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ double _v2043 = ((100000.0 + (((double)(this->f_S_6_21_Z)) * 100.0)) + ((double)(this->f_S__60_r))); this->f_S_6_21_Z = rt::touint_d(_v2043); _v2043; });
    return rt::NUL;
}
rt::Value C_S__3b__3d_::m_S_1_21_P() {
    RT_FN("S__3b__3d_.S_1_21_P");
    if (((((double)(this->f_S__60_r)) == 13.0) && (((double)(C_S_8G::sg_S__2c_P())) < 3.0))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[838])));
    }
    return rt::slot_string(this->f_S_1i);
    return rt::NUL;
}
rt::Value C_S__3b__3d_::m_S__40__22_() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3b__3d_.S__40__22_");
    if (((((double)(this->f_S__60_r)) == 13.0) && (!C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[839]), rt::arr_at(g::SV.C_S__2d_D__S__23__21_Q, (C_S_8G::sm_S_7d(g::SV.C_S_4_21_i__id) ? 2.0 : 1.0))));
    }
    (l_A__loc2_ = rt::toint_d(rt::m_floor((((((double)(this->f_S__60_r)) + 3.0)) / 4.0))));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[840]), rt::dcallv(rt::V((double)(l_A__loc2_)), rt::N_toString))));
    if ((rt::mod(((double)(this->f_S__60_r)), 4.0) == 0.0)) {
        if ((C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id) && (((double)(C_S_8G::sg_S__2c_P())) < 2.0))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[841]))))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[842]))))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__3b__3d_::m_S__21_E() {
    RT_FN("S__3b__3d_.S__21_E");
    if ((!C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id))) {
        if ((({ bool _t2044 = (((double)(this->f_S__60_r)) == 13.0); _t2044 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t2044; }) && C_S_8G::sm_S_7d(g::SV.C_S__3d__21_i__id))) {
            return rt::slot_string(rt::add(this->C_S__60_6::m_S__21_E(), rt::VS(g::LS[843])));
        }
        if ((({ bool _t2045 = (((double)(this->f_S__60_r)) == 13.0); _t2045 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t2045; }) && C_S_8G::sm_S_7d(g::SV.C_S_4_21_i__id))) {
            return rt::slot_string(rt::add(this->C_S__60_6::m_S__21_E(), rt::VS(g::LS[844])));
        }
    }
    return rt::slot_string(this->C_S__60_6::m_S__21_E());
    return rt::NUL;
}
rt::Value C_S__3b__3d_::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__3b__3d_.S_6r");
    ({ bool _v2046 = false; this->f_S__3c__21_7 = _v2046; _v2046; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v2047 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v2047); });
    return rt::NUL;
}
rt::Value C_S__3b__3d_::m_S__3e__21__2d_() {
    RT_FN("S__3b__3d_.S__3e__21__2d_");
    return rt::slot_string(rt::VS(g::LS[845]));
    return rt::NUL;
}
bool C_S__3b__3d_::g_S__2d_6() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__3b__3d_.S__2d_6_get");
    if (((((double)(this->f_S__60_r)) == 13.0) && (!C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)))) {
        return ({ bool _t2049 = C_S_8G::sm_S_7d(g::SV.C_S__3b_D__id); _t2049 ? (bool)((({ bool _t2048 = C_S_8G::sm_S_7d(g::SV.C_S__3d__21_i__id); _t2048 ? _t2048 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4_21_i__id)); }))) : _t2049; });
    }
    if (((((double)(this->f_S__60_r)) >= 13.0) && (!C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)))) {
        return false;
    }
    (l_A__loc1_ = rt::toint_d(rt::m_floor((((((double)(this->f_S__60_r)) + 3.0)) / 4.0))));
    return ({ bool _t2056 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t2056 ? (bool)((({ bool _t2055 = ({ bool _t2053 = ({ bool _t2051 = (((double)(l_A__loc1_)) == 1.0); _t2051 ? _t2051 : (bool)(({ bool _t2050 = (((double)(l_A__loc1_)) == 2.0); _t2050 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3f__21_F__id)) : _t2050; })); }); _t2053 ? _t2053 : (bool)(({ bool _t2052 = (((double)(l_A__loc1_)) == 3.0); _t2052 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b_D__id)) : _t2052; })); }); _t2055 ? _t2055 : (bool)(({ bool _t2054 = (((double)(l_A__loc1_)) == 4.0); _t2054 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2c__22__2d___id)) : _t2054; })); }))) : _t2056; });
    return false;
}
bool C_S__3b__3d_::g_S__26_8() {
    RT_FN("S__3b__3d_.S__26_8_get");
    return false;
    return false;
}
double C_S__3b__3d_::sm_S_2_5d_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__3b__3d_.S_2_5d_");
    return 0.0;
    return 0.0;
}
double C_S__3b__3d_::sm_S_6e(rt::Value p0, int32_t p1) {
    rt::Value l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc4_ = 0;
    RT_FN("S__3b__3d_.S_6e");
    (l_A__loc3_ = ((int32_t)(({ rt::Value _o2057 = l_param1; C_S__60_6* _p2058 = rt::as_ptr<C_S__60_6>(_o2057); _p2058 ? _p2058->f_S__5b__22__2d_ : rt::touint(rt::dget(_o2057, NM_S__5b__22__2d_)); }))));
    (l_A__loc5_ = rt::toint_d(rt::m_floor((((((double)(l_A__loc3_)) + 2.0)) / 3.0))));
    (l_A__loc4_ = rt::toint_d((rt::mod(((((double)(g::SV.C_S__3b__3d___S__2b__21_Q)) - 1.0)), 4.0) + 1.0)));
    if ((({ bool _t2063 = (((double)(({ rt::Value _o2059 = l_param1; C_S__60_6* _p2060 = rt::as_ptr<C_S__60_6>(_o2059); _p2060 ? _p2060->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2059, NM_S__2d__21__5e_)); }))) == 13.0); _t2063 ? _t2063 : (bool)((((double)(({ rt::Value _o2061 = l_param1; C_S__60_6* _p2062 = rt::as_ptr<C_S__60_6>(_o2061); _p2062 ? _p2062->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2061, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o2064 = l_param1; C_S__60_6* _p2065 = rt::as_ptr<C_S__60_6>(_o2064); _p2065 ? _p2065->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2064, NM_S__2d__21__5e_)); }))) == 15.0))) {
        if ((({ bool _t2074 = ({ bool _t2069 = (((double)(({ rt::Value _o2066 = l_param1; C_S__60_6* _p2067 = rt::as_ptr<C_S__60_6>(_o2066); _p2067 ? _p2067->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2066, NM_S__2d__21__5e_)); }))) == 13.0); _t2069 ? (bool)((({ bool _t2068 = (((double)(l_param2)) == 2.0); _t2068 ? _t2068 : (bool)((((double)(l_param2)) == 4.0)); }))) : _t2069; }); _t2074 ? _t2074 : (bool)(({ bool _t2073 = (((double)(({ rt::Value _o2070 = l_param1; C_S__60_6* _p2071 = rt::as_ptr<C_S__60_6>(_o2070); _p2071 ? _p2071->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2070, NM_S__2d__21__5e_)); }))) == 14.0); _t2073 ? (bool)((({ bool _t2072 = (((double)(l_param2)) == 0.0); _t2072 ? _t2072 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t2073; })); }) || ((((double)(({ rt::Value _o2075 = l_param1; C_S__60_6* _p2076 = rt::as_ptr<C_S__60_6>(_o2075); _p2076 ? _p2076->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2075, NM_S__2d__21__5e_)); }))) == 15.0) && ((((double)(l_param2)) == 1.0) || (((double)(l_param2)) == 3.0))))) {
            return (1e+30 * rt::m_pow(10.0, (3.0 * ((double)(l_A__loc4_)))));
        }
        return 0.0;
    }
    if ((((double)(({ rt::Value _o2077 = l_param1; C_S__60_6* _p2078 = rt::as_ptr<C_S__60_6>(_o2077); _p2078 ? _p2078->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2077, NM_S__2d__21__5e_)); }))) == 12.0)) {
        if (((((double)(l_param2)) == 9.0) || (((double)(l_param2)) == 10.0))) {
            return (10000.0 * rt::m_pow(10.0, (2.0 * ((double)(l_A__loc4_)))));
        }
        return 0.0;
    }
    if ((({ bool _t2094 = ({ bool _t2089 = ({ bool _t2084 = ({ bool _t2083 = ({ bool _t2082 = ({ bool _t2081 = (((double)(l_param2)) == ((double)(({ rt::Value _o2079 = l_param1; C_S__60_6* _p2080 = rt::as_ptr<C_S__60_6>(_o2079); _p2080 ? _p2080->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2079, NM_S__2d__21__5e_)); })))); _t2081 ? (bool)((!(((double)(l_param2)) == 6.0))) : _t2081; }); _t2082 ? (bool)((!(((double)(l_param2)) == 7.0))) : _t2082; }); _t2083 ? (bool)((!(((double)(l_param2)) == 8.0))) : _t2083; }); _t2084 ? (bool)((!(((double)(l_param2)) == 12.0))) : _t2084; }); _t2089 ? _t2089 : (bool)(({ bool _t2088 = (((double)(({ rt::Value _o2085 = l_param1; C_S__60_6* _p2086 = rt::as_ptr<C_S__60_6>(_o2085); _p2086 ? _p2086->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2085, NM_S__2d__21__5e_)); }))) == 6.0); _t2088 ? (bool)((({ bool _t2087 = (((double)(l_param2)) == 2.0); _t2087 ? _t2087 : (bool)((((double)(l_param2)) == 3.0)); }))) : _t2088; })); }); _t2094 ? _t2094 : (bool)(({ bool _t2093 = (((double)(({ rt::Value _o2090 = l_param1; C_S__60_6* _p2091 = rt::as_ptr<C_S__60_6>(_o2090); _p2091 ? _p2091->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2090, NM_S__2d__21__5e_)); }))) == 7.0); _t2093 ? (bool)((({ bool _t2092 = (((double)(l_param2)) == 1.0); _t2092 ? _t2092 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t2093; })); }) || ((((double)(({ rt::Value _o2095 = l_param1; C_S__60_6* _p2096 = rt::as_ptr<C_S__60_6>(_o2095); _p2096 ? _p2096->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2095, NM_S__2d__21__5e_)); }))) == 8.0) && ((((double)(l_param2)) == 0.0) || (((double)(l_param2)) == 4.0))))) {
        return (rt::m_floor((rt::m_pow(((double)(l_A__loc5_)), 3.0) * rt::m_pow(((double)(l_A__loc4_)), 2.5))) * 1000.0);
    }
    return 0.0;
    return 0.0;
}
C_S__3b__3d_* C_S__3b__3d_::alloc_() {
    C_S__3b__3d_* o = rt::make<C_S__3b__3d_>();
    return o;
}
rt::Value C_S__3b__3d_::mk_(rt::Value* a, int n) {
    C_S__3b__3d_* o = alloc_();
    o->C_S__3b__3d_::ctor_(rt::arg<int32_t>(a, n, 0, 0));
    return rt::VO(o);
}
bool C_S__3b__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__60_r: out = rt::V((double)(f_S__60_r)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_r: f_S__60_r = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_r: { rt::Value f = rt::V((double)(f_S__60_r)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__21_E: return true;
    case NM_S_6r: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    case NM_S__60_r: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__3d_::smeth_(int id) {
    switch (id) {
    case NM_S_2_5d_: return true;
    case NM_S_6e: return true;
    default: return false;
    }
}
bool C_S__3b__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__5b_: out = rt::V((double)(g::SV.C_S__3b__3d___S_9_21__5b_)); return true;
    case NM_S__2b__21_Q: out = rt::V((double)(g::SV.C_S__3b__3d___S__2b__21_Q)); return true;
    case NM_S_2_5d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__5b_: g::SV.C_S__3b__3d___S_9_21__5b_ = rt::toint(v); return true;
    case NM_S__2b__21_Q: g::SV.C_S__3b__3d___S__2b__21_Q = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__3b__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_5d_: out = rt::V(sm_S_2_5d_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S_6e: out = rt::V(sm_S_6e(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<int32_t>(a, n, 1, 0))); return true;
    default: return false;
    }
}
void C_S__3b_D::ctor_() {
    RT_FN("S__3b_D.S__3b_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v2097 = 231.0; this->f_S_6_21_Z = rt::touint_d(_v2097); _v2097; });
    ({ rt::Value _v2098 = rt::trv(rt::VS(g::LS[846])); this->f_S_1i = rt::slot_string(_v2098); _v2098; });
    ({ rt::Value _v2099 = rt::VS(g::LS[847]); this->f_S__5e__21__23_ = rt::slot_string(_v2099); _v2099; });
    ({ rt::Value _v2100 = rt::VS(g::LS[802]); this->f_S__3f__21__3d_ = rt::slot_string(_v2100); _v2100; });
    ({ rt::Value _v2101 = rt::VS(g::LS[802]); this->f_S__40_1 = rt::slot_string(_v2101); _v2101; });
    ({ rt::Value _v2102 = rt::trv(rt::VS(g::LS[848])); this->f_S_7_23_ = rt::slot_string(_v2102); _v2102; });
    ({ double _v2103 = 5e+72; this->f_S__3e__3d_ = _v2103; _v2103; });
    ({ double _v2104 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v2104); _v2104; });
    ({ double _v2105 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2105); _v2105; });
    ({ bool _v2106 = true; this->f_S__3c__60_ = _v2106; _v2106; });
    ({ double _v2107 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2107); _v2107; });
}
bool C_S__3b_D::g_S__2d_6() {
    RT_FN("S__3b_D.S__2d_6_get");
    return (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0);
    return false;
}
C_S__3b_D* C_S__3b_D::alloc_() {
    C_S__3b_D* o = rt::make<C_S__3b_D>();
    return o;
}
rt::Value C_S__3b_D::mk_(rt::Value* a, int n) {
    C_S__3b_D* o = alloc_();
    o->C_S__3b_D::ctor_();
    return rt::VO(o);
}
bool C_S__3b_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b_D::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_D__id)); return true;
    case NM_ids: out = g::SV.C_S__3b_D__ids; return true;
    default: return false;
    }
}
bool C_S__3b_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_J::ctor_() {
    RT_FN("S__3b_J.S__3b_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v2108 = 236.0; this->f_S_6_21_Z = rt::touint_d(_v2108); _v2108; });
    ({ rt::Value _v2109 = rt::trv(rt::VS(g::LS[850])); this->f_S_1i = rt::slot_string(_v2109); _v2109; });
    ({ rt::Value _v2110 = rt::VS(g::LS[851]); this->f_S__5e__21__23_ = rt::slot_string(_v2110); _v2110; });
    ({ double _v2111 = 2.5e+67; this->f_S__3e__3d_ = _v2111; _v2111; });
    ({ double _v2112 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v2112); _v2112; });
    ({ double _v2113 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2113); _v2113; });
    ({ bool _v2114 = true; this->f_S__3c__60_ = _v2114; _v2114; });
    ({ double _v2115 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2115); _v2115; });
}
rt::Value C_S__3b_J::m_S__40__22_() {
    RT_FN("S__3b_J.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[852]), C_S__26_c::sm_S_8_21_Z(C_S__3b_J::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__3b_J::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3b_J::g_S__2d_6() {
    RT_FN("S__3b_J.S__2d_6_get");
    return ({ bool _t2116 = C_S_8G::sm_S_7d(g::SV.C_S__3f__21_F__id); _t2116 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t2116; });
    return false;
}
double C_S__3b_J::sm_S_2_21_W() {
    RT_FN("S__3b_J.S_2_21_W");
    return (2.5 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.75));
    return 0.0;
}
double C_S__3b_J::sm_S__2c_J() {
    RT_FN("S__3b_J.S__2c_J");
    return (2.5 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.75));
    return 0.0;
}
C_S__3b_J* C_S__3b_J::alloc_() {
    C_S__3b_J* o = rt::make<C_S__3b_J>();
    return o;
}
rt::Value C_S__3b_J::mk_(rt::Value* a, int n) {
    C_S__3b_J* o = alloc_();
    o->C_S__3b_J::ctor_();
    return rt::VO(o);
}
bool C_S__3b_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b_J::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S__3b_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_J__id)); return true;
    case NM_ids: out = g::SV.C_S__3b_J__ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_J__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b_J__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S__3d__21_i::ctor_() {
    RT_FN("S__3d__21_i.S__3d__21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v2117 = 702.0; this->f_S_6_21_Z = rt::touint_d(_v2117); _v2117; });
    ({ rt::Value _v2118 = rt::trv(rt::VS(g::LS[854])); this->f_S_1i = rt::slot_string(_v2118); _v2118; });
    ({ rt::Value _v2119 = rt::VS(g::LS[855]); this->f_S__5e__21__23_ = rt::slot_string(_v2119); _v2119; });
    ({ double _v2120 = 1e+135; this->f_S__3c_R = _v2120; _v2120; });
    ({ double _v2121 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v2121); _v2121; });
    ({ double _v2122 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2122); _v2122; });
    ({ double _v2123 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2123); _v2123; });
}
rt::Value C_S__3d__21_i::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d__21_i.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((!C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[856])), rt::VS(g::LS[8])))));
    }
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::add(rt::trv(rt::VS(g::LS[857]), C_S__26_c::sm_S_5_21_p(g::SV.C_S__3d__21_i__S_7_21_i), C_S__26_c::sm_S_8_21_Z((C_S__3d__21_i::sm_S_8_22_5() + 1.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[858]), C_S__26_c::sm_S_8_21_Z(C_S__3d__21_i::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
bool C_S__3d__21_i::g_S__2d_6() {
    RT_FN("S__3d__21_i.S__2d_6_get");
    return ({ bool _t2124 = this->C_S__60_6::g_S__2d_6(); _t2124 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__21_i__id)) : _t2124; });
    return false;
}
double C_S__3d__21_i::sm_S__23__21_Y() {
    RT_FN("S__3d__21_i.S__23__21_Y");
    return (100.0 * rt::m_pow((3.0 + (0.1 * rt::m_log((1.0 + C_S__26_c::sm_S__5d__22_J())))), (((double)(({ rt::Value _o2125 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p2126 = rt::as_ptr<C_S_84>(_o2125); _p2126 ? _p2126->g_S__60_r() : rt::touint(rt::dget(_o2125, NM_S__60_r)); }))) + 1.0)));
    return 0.0;
}
double C_S__3d__21_i::sm_S__2c__21_G() {
    RT_FN("S__3d__21_i.S__2c__21_G");
    return ((((1e-05 * C_S__26_c::sm_S__5d__22_J()) * rt::m_pow(C_S_2_3c_::sm_S__2c__21_G(30.0), 0.5)) * C_S__26_c::sm_S_2_21__26_()) * ((((double)(({ rt::Value _o2127 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p2128 = rt::as_ptr<C_S_84>(_o2127); _p2128 ? _p2128->g_S__60_r() : rt::touint(rt::dget(_o2127, NM_S__60_r)); }))) + 1.0)));
    return 0.0;
}
double C_S__3d__21_i::sm_S_8_22_5() {
    RT_FN("S__3d__21_i.S_8_22_5");
    return ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0) ? 98.0 : 35.0);
    return 0.0;
}
C_S__3d__21_i* C_S__3d__21_i::alloc_() {
    C_S__3d__21_i* o = rt::make<C_S__3d__21_i>();
    return o;
}
rt::Value C_S__3d__21_i::mk_(rt::Value* a, int n) {
    C_S__3d__21_i* o = alloc_();
    o->C_S__3d__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__21_i::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    case NM_S__2c__21_G: return true;
    case NM_S_8_22_5: return true;
    default: return false;
    }
}
bool C_S__3d__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_i__id)); return true;
    case NM_S_7_21_i: out = rt::V(g::SV.C_S__3d__21_i__S_7_21_i); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_8_22_5: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_i__id = rt::touint(v); return true;
    case NM_S_7_21_i: g::SV.C_S__3d__21_i__S_7_21_i = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S_8_22_5: out = rt::V(sm_S_8_22_5()); return true;
    default: return false;
    }
}
void C_S__5e__22__27_::ctor_() {
    RT_FN("S__5e__22__27_.S__5e__22__27_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v2129 = 981.0; this->f_S_6_21_Z = rt::touint_d(_v2129); _v2129; });
    ({ rt::Value _v2130 = rt::trv(rt::VS(g::LS[859])); this->f_S_1i = rt::slot_string(_v2130); _v2130; });
    ({ rt::Value _v2131 = rt::VS(g::LS[860]); this->f_S__5e__21__23_ = rt::slot_string(_v2131); _v2131; });
    ({ rt::Value _v2132 = rt::trv(rt::VS(g::LS[861])); this->f_S_7_23_ = rt::slot_string(_v2132); _v2132; });
    ({ double _v2133 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v2133); _v2133; });
    ({ double _v2134 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2134); _v2134; });
    ({ bool _v2135 = true; this->f_S__21__21_n = _v2135; _v2135; });
    ({ double _v2136 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2136); _v2136; });
    ({ bool _v2137 = false; this->f_S_3e = _v2137; _v2137; });
}
bool C_S__5e__22__27_::g_S__2d_6() {
    RT_FN("S__5e__22__27_.S__2d_6_get");
    return ({ bool _t2140 = ({ bool _t2139 = ({ bool _t2138 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t2138 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__25__22_0__id)) : _t2138; }); _t2139 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) : _t2139; }); _t2140 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 165.0)) : _t2140; });
    return false;
}
double C_S__5e__22__27_::sm_S_2_5d_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__5e__22__27_.S_2_5d_");
    if ((({ bool _t2145 = (((double)(({ rt::Value _o2141 = l_param1; C_S__60_6* _p2142 = rt::as_ptr<C_S__60_6>(_o2141); _p2142 ? _p2142->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2141, NM_S__2d__21__5e_)); }))) == 13.0); _t2145 ? _t2145 : (bool)((((double)(({ rt::Value _o2143 = l_param1; C_S__60_6* _p2144 = rt::as_ptr<C_S__60_6>(_o2143); _p2144 ? _p2144->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2143, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o2146 = l_param1; C_S__60_6* _p2147 = rt::as_ptr<C_S__60_6>(_o2146); _p2147 ? _p2147->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2146, NM_S__2d__21__5e_)); }))) == 15.0))) {
        return 1e+101;
    }
    if ((({ bool _t2152 = (((double)(({ rt::Value _o2148 = l_param1; C_S__60_6* _p2149 = rt::as_ptr<C_S__60_6>(_o2148); _p2149 ? _p2149->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2148, NM_S__2d__21__5e_)); }))) == 9.0); _t2152 ? _t2152 : (bool)((((double)(({ rt::Value _o2150 = l_param1; C_S__60_6* _p2151 = rt::as_ptr<C_S__60_6>(_o2150); _p2151 ? _p2151->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2150, NM_S__2d__21__5e_)); }))) == 10.0)); }) || (((double)(({ rt::Value _o2153 = l_param1; C_S__60_6* _p2154 = rt::as_ptr<C_S__60_6>(_o2153); _p2154 ? _p2154->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2153, NM_S__2d__21__5e_)); }))) == 12.0))) {
        return 1e+93;
    }
    return 1e+85;
    return 0.0;
}
double C_S__5e__22__27_::sm_S_6e(rt::Value p0, int32_t p1) {
    rt::Value l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__5e__22__27_.S_6e");
    if ((({ bool _t2159 = (((double)(({ rt::Value _o2155 = l_param1; C_S__60_6* _p2156 = rt::as_ptr<C_S__60_6>(_o2155); _p2156 ? _p2156->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2155, NM_S__2d__21__5e_)); }))) == 13.0); _t2159 ? _t2159 : (bool)((((double)(({ rt::Value _o2157 = l_param1; C_S__60_6* _p2158 = rt::as_ptr<C_S__60_6>(_o2157); _p2158 ? _p2158->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2157, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o2160 = l_param1; C_S__60_6* _p2161 = rt::as_ptr<C_S__60_6>(_o2160); _p2161 ? _p2161->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2160, NM_S__2d__21__5e_)); }))) == 15.0))) {
        if ((({ bool _t2170 = ({ bool _t2165 = (((double)(({ rt::Value _o2162 = l_param1; C_S__60_6* _p2163 = rt::as_ptr<C_S__60_6>(_o2162); _p2163 ? _p2163->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2162, NM_S__2d__21__5e_)); }))) == 13.0); _t2165 ? (bool)((({ bool _t2164 = (((double)(l_param2)) == 2.0); _t2164 ? _t2164 : (bool)((((double)(l_param2)) == 4.0)); }))) : _t2165; }); _t2170 ? _t2170 : (bool)(({ bool _t2169 = (((double)(({ rt::Value _o2166 = l_param1; C_S__60_6* _p2167 = rt::as_ptr<C_S__60_6>(_o2166); _p2167 ? _p2167->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2166, NM_S__2d__21__5e_)); }))) == 14.0); _t2169 ? (bool)((({ bool _t2168 = (((double)(l_param2)) == 0.0); _t2168 ? _t2168 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t2169; })); }) || ((((double)(({ rt::Value _o2171 = l_param1; C_S__60_6* _p2172 = rt::as_ptr<C_S__60_6>(_o2171); _p2172 ? _p2172->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2171, NM_S__2d__21__5e_)); }))) == 15.0) && ((((double)(l_param2)) == 1.0) || (((double)(l_param2)) == 3.0))))) {
            return g::SV.C_S__5e__22__27___S__25__22__2b_;
        }
        return 0.0;
    }
    if ((((double)(({ rt::Value _o2173 = l_param1; C_S__60_6* _p2174 = rt::as_ptr<C_S__60_6>(_o2173); _p2174 ? _p2174->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2173, NM_S__2d__21__5e_)); }))) == 12.0)) {
        if (((((double)(l_param2)) == 9.0) || (((double)(l_param2)) == 10.0))) {
            return g::SV.C_S__5e__22__27___S__25__22__2b_;
        }
        return 0.0;
    }
    if ((({ bool _t2190 = ({ bool _t2185 = ({ bool _t2180 = ({ bool _t2179 = ({ bool _t2178 = ({ bool _t2177 = (((double)(l_param2)) == ((double)(({ rt::Value _o2175 = l_param1; C_S__60_6* _p2176 = rt::as_ptr<C_S__60_6>(_o2175); _p2176 ? _p2176->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2175, NM_S__2d__21__5e_)); })))); _t2177 ? (bool)((!(((double)(l_param2)) == 6.0))) : _t2177; }); _t2178 ? (bool)((!(((double)(l_param2)) == 7.0))) : _t2178; }); _t2179 ? (bool)((!(((double)(l_param2)) == 8.0))) : _t2179; }); _t2180 ? (bool)((!(((double)(l_param2)) == 12.0))) : _t2180; }); _t2185 ? _t2185 : (bool)(({ bool _t2184 = (((double)(({ rt::Value _o2181 = l_param1; C_S__60_6* _p2182 = rt::as_ptr<C_S__60_6>(_o2181); _p2182 ? _p2182->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2181, NM_S__2d__21__5e_)); }))) == 6.0); _t2184 ? (bool)((({ bool _t2183 = (((double)(l_param2)) == 2.0); _t2183 ? _t2183 : (bool)((((double)(l_param2)) == 3.0)); }))) : _t2184; })); }); _t2190 ? _t2190 : (bool)(({ bool _t2189 = (((double)(({ rt::Value _o2186 = l_param1; C_S__60_6* _p2187 = rt::as_ptr<C_S__60_6>(_o2186); _p2187 ? _p2187->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2186, NM_S__2d__21__5e_)); }))) == 7.0); _t2189 ? (bool)((({ bool _t2188 = (((double)(l_param2)) == 1.0); _t2188 ? _t2188 : (bool)((((double)(l_param2)) == 5.0)); }))) : _t2189; })); }) || ((((double)(({ rt::Value _o2191 = l_param1; C_S__60_6* _p2192 = rt::as_ptr<C_S__60_6>(_o2191); _p2192 ? _p2192->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2191, NM_S__2d__21__5e_)); }))) == 8.0) && ((((double)(l_param2)) == 0.0) || (((double)(l_param2)) == 4.0))))) {
        return g::SV.C_S__5e__22__27___S__25__22__2b_;
    }
    return 0.0;
    return 0.0;
}
C_S__5e__22__27_* C_S__5e__22__27_::alloc_() {
    C_S__5e__22__27_* o = rt::make<C_S__5e__22__27_>();
    return o;
}
rt::Value C_S__5e__22__27_::mk_(rt::Value* a, int n) {
    C_S__5e__22__27_* o = alloc_();
    o->C_S__5e__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e__22__27_::smeth_(int id) {
    switch (id) {
    case NM_S_2_5d_: return true;
    case NM_S_6e: return true;
    default: return false;
    }
}
bool C_S__5e__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__25__22__2b_: out = rt::V(g::SV.C_S__5e__22__27___S__25__22__2b_); return true;
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22__27___id)); return true;
    case NM_S_2_5d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__25__22__2b_: g::SV.C_S__5e__22__27___S__25__22__2b_ = rt::tonum(v); return true;
    case NM_id: g::SV.C_S__5e__22__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_5d_: out = rt::V(sm_S_2_5d_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S_6e: out = rt::V(sm_S_6e(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<int32_t>(a, n, 1, 0))); return true;
    default: return false;
    }
}
void C_S__60_x::ctor_() {
    RT_FN("S__60_x.S__60_x");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v2193 = 228.0; this->f_S_6_21_Z = rt::touint_d(_v2193); _v2193; });
    ({ rt::Value _v2194 = rt::trv(rt::VS(g::LS[862])); this->f_S_1i = rt::slot_string(_v2194); _v2194; });
    ({ rt::Value _v2195 = rt::VS(g::LS[863]); this->f_S__5e__21__23_ = rt::slot_string(_v2195); _v2195; });
    ({ double _v2196 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v2196); _v2196; });
    ({ double _v2197 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v2197); _v2197; });
    ({ double _v2198 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2198); _v2198; });
}
int32_t C_S__60_x::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__60_x::dm_S_75_2() { return false; }
rt::Value C_S__60_x::dm_S_75_3() { return rt::NUL; }
double C_S__60_x::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__60_x.S_75");
    if ((({ bool _t2204 = ({ bool _t2203 = ({ bool _t2202 = ({ bool _t2201 = ({ bool _t2200 = ({ bool _t2199 = (((double)(l_param1)) == 0.0); _t2199 ? _t2199 : (bool)((((double)(l_param1)) == 1.0)); }); _t2200 ? _t2200 : (bool)((((double)(l_param1)) == 2.0)); }); _t2201 ? _t2201 : (bool)((((double)(l_param1)) == 3.0)); }); _t2202 ? _t2202 : (bool)((((double)(l_param1)) == 4.0)); }); _t2203 ? _t2203 : (bool)((((double)(l_param1)) == 5.0)); }); _t2204 ? _t2204 : (bool)((((double)(l_param1)) == 9.0)); }) || (((double)(l_param1)) == 10.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+30 : 100000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__60_x::m_S__40__22_() {
    RT_FN("S__60_x.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[864]), C_S__26_c::sm_S_6_21_T(C_S__60_x::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S__60_x::g_S__2d_6() {
    RT_FN("S__60_x.S__2d_6_get");
    return ({ bool _t2206 = ({ bool _t2205 = C_S__26_c::sm_S__27__21__5f_(); _t2205 ? (bool)(C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[865])))) : _t2205; }); _t2206 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t2206; });
    return false;
}
double C_S__60_x::sm_S__27__21_b() {
    RT_FN("S__60_x.S__27__21_b");
    return (2.5 * rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 31.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 31.0))))));
    return 0.0;
}
C_S__60_x* C_S__60_x::alloc_() {
    C_S__60_x* o = rt::make<C_S__60_x>();
    return o;
}
rt::Value C_S__60_x::mk_(rt::Value* a, int n) {
    C_S__60_x* o = alloc_();
    o->C_S__60_x::ctor_();
    return rt::VO(o);
}
bool C_S__60_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__60_x::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__60_x::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__60_x::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60_x::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60_x::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__60_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60_x__id)); return true;
    case NM_ids: out = g::SV.C_S__60_x__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60_x__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60_x__ids = v; return true;
    default: return false;
    }
}
bool C_S__60_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__23__21__60_::ctor_() {
    RT_FN("S__23__21__60_.S__23__21__60_");
    (void)(rt::NUL);
}
rt::Value C_S__23__21__60_::m_S__5b__21_C() {
    RT_FN("S__23__21__60_.S__5b__21_C");
    if ((!(((double)(this->f_S__22__21_U)) == (-1.0)))) {
        ({ double _v2207 = ((100000.0 + (((double)(this->f_S_6_21_Z)) * 100.0)) + ((double)(this->f_S__22__21_U))); this->f_S_6_21_Z = rt::touint_d(_v2207); _v2207; });
    }
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S__5b_C() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__23__21__60_.S__5b_C");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::NUL);
    if (this->f_S__3f__21__2c_) {
        return rt::NUL;
    }
    ({ bool _v2208 = false; this->f_S_3_21_c = _v2208; _v2208; });
    if (((!rt::eq(this->f_S__3f__21__3d_, rt::VS(g::LS[113]))) && rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 24.0), rt::V(0.0)))) {
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) < rt::alen(rt::idx_get(g::SV.C_S_8G__S__5d_A, this->f_S__3f__21__3d_)))) {
            (l_A__loc1_ = rt::idx_get(rt::idx_get(g::SV.C_S_8G__S__5d_A, this->f_S__3f__21__3d_), rt::V((double)(l_A__loc2_))));
            if (rt::eq(l_A__loc1_, rt::VO(this))) {
                break;
            }
            ({ bool _v2211 = false; rt::Value _o2209 = l_A__loc1_; C_S__23__21__60_* _p2210 = rt::as_ptr<C_S__23__21__60_>(_o2209); if (_p2210) _p2210->f_S_3_21_c = _v2211; else rt::dset(_o2209, NM_S_3_21_c, rt::VB(_v2211)); _v2211; });
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
    }
    return rt::NUL;
}
bool C_S__23__21__60_::m_S__20_F() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__23__21__60_.S__20_F");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::NUL);
    if (this->f_S__3f__21__2c_) {
        return false;
    }
    if (this->f_S_3_21_c) {
        return true;
    }
    if (((!rt::eq(this->f_S__3f__21__3d_, rt::VS(g::LS[113]))) && rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 24.0), rt::V(0.0)))) {
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) < rt::alen(rt::idx_get(g::SV.C_S_8G__S__5d_A, this->f_S__3f__21__3d_)))) {
            (l_A__loc1_ = rt::idx_get(rt::idx_get(g::SV.C_S_8G__S__5d_A, this->f_S__3f__21__3d_), rt::V((double)(l_A__loc2_))));
            if (rt::eq(l_A__loc1_, rt::VO(this))) {
                break;
            }
            if (({ rt::Value _o2212 = l_A__loc1_; C_S__23__21__60_* _p2213 = rt::as_ptr<C_S__23__21__60_>(_o2212); _p2213 ? _p2213->f_S_3_21_c : rt::T(rt::dget(_o2212, NM_S_3_21_c)); })) {
                return true;
            }
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
    }
    return false;
    return false;
}
rt::Value C_S__23__21__60_::m_S_1_21__2c_() {
    RT_FN("S__23__21__60_.S_1_21__2c_");
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S__21__21_G() {
    RT_FN("S__23__21__60_.S__21__21_G");
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S__3b__21_I() {
    RT_FN("S__23__21__60_.S__3b__21_I");
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S__3d_u() {
    RT_FN("S__23__21__60_.S__3d_u");
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S_8_5b_() {
    RT_FN("S__23__21__60_.S_8_5b_");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S__23__21__60_::dm_S__3f__21_N_2() { return false; }
rt::Value C_S__23__21__60_::m_S__3f__21_N(double p0, double p1, bool p2) {
    double l_param1 = p0;
    double l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc4_ = 0;
    RT_FN("S__23__21__60_.S__3f__21_N");
    (l_A__loc4_ = rt::toint_d(rt::m_floor(((100.0 * l_param1) / l_param2))));
    if (l_param3) {
        return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(C_S__26_c::sm_S_8_21_Z(l_param1, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::VS(g::LS[141])), C_S__26_c::sm_S_8_21_Z(l_param2, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[194])), rt::dcallv(rt::V((double)(l_A__loc4_)), rt::N_toString)), rt::VS(g::LS[867])));
    }
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(rt::dcallv(rt::V(l_param1), rt::N_toString), rt::VS(g::LS[141])), rt::dcallv(rt::V(l_param2), rt::N_toString)), rt::VS(g::LS[194])), rt::dcallv(rt::V((double)(l_A__loc4_)), rt::N_toString)), rt::VS(g::LS[867])));
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S__40__22_() {
    RT_FN("S__23__21__60_.S__40__22_");
    return rt::slot_string(this->f_S_7_23_);
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S_8_21_s() {
    RT_FN("S__23__21__60_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[868])));
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S_1_21_P() {
    RT_FN("S__23__21__60_.S_1_21_P");
    return rt::slot_string(this->f_S_1i);
    return rt::NUL;
}
rt::Value C_S__23__21__60_::m_S__21_E() {
    RT_FN("S__23__21__60_.S__21_E");
    return rt::slot_string(this->f_S__5e__21__23_);
    return rt::NUL;
}
bool C_S__23__21__60_::g_S__2d_6() {
    RT_FN("S__23__21__60_.S__2d_6_get");
    return ({ bool _t2214 = (((double)(this->f_S__2c__21_Y)) == 0.0); _t2214 ? _t2214 : (bool)((((double)(this->f_S__2c__21_Y)) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))); });
    return false;
}
bool C_S__23__21__60_::g_S__5d__3b_() {
    RT_FN("S__23__21__60_.S__5d__3b__get");
    return false;
    return false;
}
bool C_S__23__21__60_::g_S__3f__21_a() {
    RT_FN("S__23__21__60_.S__3f__21_a_get");
    return false;
    return false;
}
C_S__23__21__60_* C_S__23__21__60_::alloc_() {
    C_S__23__21__60_* o = rt::make<C_S__23__21__60_>();
    return o;
}
rt::Value C_S__23__21__60_::mk_(rt::Value* a, int n) {
    C_S__23__21__60_* o = alloc_();
    o->C_S__23__21__60_::ctor_();
    return rt::VO(o);
}
bool C_S__23__21__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_id: out = rt::V((double)(f_id)); return true;
    case NM_ids: out = f_ids; return true;
    case NM_S_6_21_Z: out = rt::V((double)(f_S_6_21_Z)); return true;
    case NM_S_1i: out = f_S_1i; return true;
    case NM_S__3f__21__3d_: out = f_S__3f__21__3d_; return true;
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_7_23_: out = f_S_7_23_; return true;
    case NM_S__2c__21_Y: out = rt::V((double)(f_S__2c__21_Y)); return true;
    case NM_S_4_21_K: out = rt::VB(f_S_4_21_K); return true;
    case NM_S_3_21_9: out = rt::VB(f_S_3_21_9); return true;
    case NM_S__3f__21__2c_: out = rt::VB(f_S__3f__21__2c_); return true;
    case NM_S__40__21_R: out = rt::VB(f_S__40__21_R); return true;
    case NM_S__40__21_Z: out = rt::VB(f_S__40__21_Z); return true;
    case NM_S__3f__21__3b_: out = rt::V((double)(f_S__3f__21__3b_)); return true;
    case NM_S_3_21_c: out = rt::VB(f_S_3_21_c); return true;
    case NM_S__22__21_U: out = rt::V((double)(f_S__22__21_U)); return true;
    case NM_S_5_21__3b_: out = rt::VB(f_S_5_21__3b_); return true;
    case NM_S__2c__21_B: out = rt::V((double)(f_S__2c__21_B)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_F: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21__2c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__21_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3f__21_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__23__21__60_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_id: f_id = rt::touint(v); return true;
    case NM_ids: f_ids = rt::slot_string(v); return true;
    case NM_S_6_21_Z: f_S_6_21_Z = rt::touint(v); return true;
    case NM_S_1i: f_S_1i = rt::slot_string(v); return true;
    case NM_S__3f__21__3d_: f_S__3f__21__3d_ = rt::slot_string(v); return true;
    case NM_S__5e__21__23_: f_S__5e__21__23_ = rt::slot_string(v); return true;
    case NM_S_7_23_: f_S_7_23_ = rt::slot_string(v); return true;
    case NM_S__2c__21_Y: f_S__2c__21_Y = rt::toint(v); return true;
    case NM_S_4_21_K: f_S_4_21_K = rt::T(v); return true;
    case NM_S_3_21_9: f_S_3_21_9 = rt::T(v); return true;
    case NM_S__3f__21__2c_: f_S__3f__21__2c_ = rt::T(v); return true;
    case NM_S__40__21_R: f_S__40__21_R = rt::T(v); return true;
    case NM_S__40__21_Z: f_S__40__21_Z = rt::T(v); return true;
    case NM_S__3f__21__3b_: f_S__3f__21__3b_ = rt::touint(v); return true;
    case NM_S_3_21_c: f_S_3_21_c = rt::T(v); return true;
    case NM_S__22__21_U: f_S__22__21_U = rt::toint(v); return true;
    case NM_S_5_21__3b_: f_S_5_21__3b_ = rt::T(v); return true;
    case NM_S__2c__21_B: f_S__2c__21_B = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__23__21__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__5b_C: out = m_S__5b_C(); return true;
    case NM_S__20_F: out = rt::VB(m_S__20_F()); return true;
    case NM_S_1_21__2c_: out = m_S_1_21__2c_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__3b__21_I: out = m_S__3b__21_I(); return true;
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__3f__21_N: out = m_S__3f__21_N(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN), rt::arg<bool>(a, n, 2, C_S__23__21__60_::dm_S__3f__21_N_2())); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    case NM_id: { rt::Value f = rt::V((double)(f_id)); out = rt::call_value(f, a, n); return true; }
    case NM_ids: { rt::Value f = f_ids; out = rt::call_value(f, a, n); return true; }
    case NM_S_6_21_Z: { rt::Value f = rt::V((double)(f_S_6_21_Z)); out = rt::call_value(f, a, n); return true; }
    case NM_S_1i: { rt::Value f = f_S_1i; out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21__3d_: { rt::Value f = f_S__3f__21__3d_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_7_23_: { rt::Value f = f_S_7_23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_Y: { rt::Value f = rt::V((double)(f_S__2c__21_Y)); out = rt::call_value(f, a, n); return true; }
    case NM_S_4_21_K: { rt::Value f = rt::VB(f_S_4_21_K); out = rt::call_value(f, a, n); return true; }
    case NM_S_3_21_9: { rt::Value f = rt::VB(f_S_3_21_9); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21__2c_: { rt::Value f = rt::VB(f_S__3f__21__2c_); out = rt::call_value(f, a, n); return true; }
    case NM_S__40__21_R: { rt::Value f = rt::VB(f_S__40__21_R); out = rt::call_value(f, a, n); return true; }
    case NM_S__40__21_Z: { rt::Value f = rt::VB(f_S__40__21_Z); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21__3b_: { rt::Value f = rt::V((double)(f_S__3f__21__3b_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_3_21_c: { rt::Value f = rt::VB(f_S_3_21_c); out = rt::call_value(f, a, n); return true; }
    case NM_S__22__21_U: { rt::Value f = rt::V((double)(f_S__22__21_U)); out = rt::call_value(f, a, n); return true; }
    case NM_S_5_21__3b_: { rt::Value f = rt::VB(f_S_5_21__3b_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_B: { rt::Value f = rt::V((double)(f_S__2c__21_B)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__23__21__60_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__5b_C: return true;
    case NM_S__20_F: return true;
    case NM_S_1_21__2c_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__3b__21_I: return true;
    case NM_S__3d_u: return true;
    case NM_S_8_5b_: return true;
    case NM_S__3f__21_N: return true;
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_1_21_P: return true;
    case NM_S__21_E: return true;
    case NM_S__2d_6: return false;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    case NM_id: return false;
    case NM_ids: return false;
    case NM_S_6_21_Z: return false;
    case NM_S_1i: return false;
    case NM_S__3f__21__3d_: return false;
    case NM_S__5e__21__23_: return false;
    case NM_S_7_23_: return false;
    case NM_S__2c__21_Y: return false;
    case NM_S_4_21_K: return false;
    case NM_S_3_21_9: return false;
    case NM_S__3f__21__2c_: return false;
    case NM_S__40__21_R: return false;
    case NM_S__40__21_Z: return false;
    case NM_S__3f__21__3b_: return false;
    case NM_S_3_21_c: return false;
    case NM_S__22__21_U: return false;
    case NM_S_5_21__3b_: return false;
    case NM_S__2c__21_B: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__23__21__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21__60_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_7::ctor_() {
    RT_FN("S__20__21_7.S__20__21_7");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2215 = 227.0; this->f_S_6_21_Z = rt::touint_d(_v2215); _v2215; });
    ({ rt::Value _v2216 = rt::trv(rt::VS(g::LS[500])); this->f_S_1i = rt::slot_string(_v2216); _v2216; });
    ({ rt::Value _v2217 = rt::trv(rt::VS(g::LS[869])); this->f_S_7_23_ = rt::slot_string(_v2217); _v2217; });
    ({ rt::Value _v2218 = rt::VS(g::LS[501]); this->f_S__5e__21__23_ = rt::slot_string(_v2218); _v2218; });
    ({ double _v2219 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2219); _v2219; });
}
rt::Value C_S__20__21_7::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__20__21_7.S__21__21_G");
    (l_A__loc1_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst2220;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2220);
            for (const rt::Value& _x2221 : _lst2220) {
                l_A__loc2_ = _x2221;
                if ((({ bool _t2228 = ({ bool _t2224 = rt::is_class(l_A__loc2_, C_S__26__21__5f_::CI); _t2224 ? (bool)((!({ rt::Value _o2222 = l_A__loc2_; C_S__60_6* _p2223 = rt::as_ptr<C_S__60_6>(_o2222); _p2223 ? _p2223->f_S__3f__21_6 : rt::T(rt::dget(_o2222, NM_S__3f__21_6)); }))) : _t2224; }); _t2228 ? (bool)((((double)(({ rt::Value _o2226 = (({ rt::Value _t2225 = l_A__loc2_; rt::is_class(_t2225, C_S__26__21__5f_::CI) ? _t2225 : rt::NUL; })); C_S__26__21__5f_* _p2227 = rt::as_ptr<C_S__26__21__5f_>(_o2226); _p2227 ? _p2227->f_S__25_w : rt::toint(rt::dget(_o2226, NM_S__25_w)); }))) > 1175.0)) : _t2228; }) && (((double)(({ rt::Value _o2230 = (({ rt::Value _t2229 = l_A__loc2_; rt::is_class(_t2229, C_S__26__21__5f_::CI) ? _t2229 : rt::NUL; })); C_S__26__21__5f_* _p2231 = rt::as_ptr<C_S__26__21__5f_>(_o2230); _p2231 ? _p2231->f_S__25_w : rt::toint(rt::dget(_o2230, NM_S__25_w)); }))) <= 1500.0))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o2232 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2233 = rt::as_ptr<C_S_8G>(_o2232); _p2233 ? _p2233->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2232, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__20__21_7::g_S__5d__3b_() {
    RT_FN("S__20__21_7.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 48.0);
    return false;
}
bool C_S__20__21_7::g_S__3f__21_a() {
    RT_FN("S__20__21_7.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__20__21_7* C_S__20__21_7::alloc_() {
    C_S__20__21_7* o = rt::make<C_S__20__21_7>();
    return o;
}
rt::Value C_S__20__21_7::mk_(rt::Value* a, int n) {
    C_S__20__21_7* o = alloc_();
    o->C_S__20__21_7::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20__21_7::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20__21_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20__21_7::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20__21_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_7__id)); return true;
    default: return false;
    }
}
bool C_S__20__21_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_7__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_B::ctor_() {
    RT_FN("S__20__21_B.S__20__21_B");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2234 = 90.0; this->f_S_6_21_Z = rt::touint_d(_v2234); _v2234; });
    ({ rt::Value _v2235 = rt::trv(rt::VS(g::LS[513])); this->f_S_1i = rt::slot_string(_v2235); _v2235; });
    ({ rt::Value _v2236 = rt::trv(rt::VS(g::LS[870])); this->f_S_7_23_ = rt::slot_string(_v2236); _v2236; });
    ({ rt::Value _v2237 = rt::VS(g::LS[514]); this->f_S__5e__21__23_ = rt::slot_string(_v2237); _v2237; });
    ({ double _v2238 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2238); _v2238; });
}
rt::Value C_S__20__21_B::m_S__21__21_G() {
    RT_FN("S__20__21_B.S__21__21_G");
    if ((({ bool _t2241 = ({ bool _t2240 = ({ bool _t2239 = (!this->f_S_4_21_K); _t2239 ? (bool)((((double)(g::SV.C_S__23__21__21___S__5e_1)) == 0.0)) : _t2239; }); _t2240 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0))) : _t2240; }); _t2241 ? (bool)(rt::lt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(305.0))) : _t2241; }) && rt::lt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 45.0), rt::V(60.0)))) {
        (void)(({ rt::Value _o2242 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2243 = rt::as_ptr<C_S_8G>(_o2242); _p2243 ? _p2243->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2242, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__20__21_B::g_S__5d__3b_() {
    RT_FN("S__20__21_B.S__5d__3b__get");
    return true;
    return false;
}
C_S__20__21_B* C_S__20__21_B::alloc_() {
    C_S__20__21_B* o = rt::make<C_S__20__21_B>();
    return o;
}
rt::Value C_S__20__21_B::mk_(rt::Value* a, int n) {
    C_S__20__21_B* o = alloc_();
    o->C_S__20__21_B::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20__21_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20__21_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20__21_B::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20__21_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_B__id)); return true;
    case NM_ids: out = g::SV.C_S__20__21_B__ids; return true;
    default: return false;
    }
}
bool C_S__20__21_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_B__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20__21_B__ids = v; return true;
    default: return false;
    }
}
bool C_S__20__21_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_c::ctor_() {
    RT_FN("S__20__21_c.S__20__21_c");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2244 = 67.0; this->f_S_6_21_Z = rt::touint_d(_v2244); _v2244; });
    ({ rt::Value _v2245 = rt::trv(rt::VS(g::LS[443])); this->f_S_1i = rt::slot_string(_v2245); _v2245; });
    ({ rt::Value _v2246 = rt::trv(rt::VS(g::LS[872])); this->f_S_7_23_ = rt::slot_string(_v2246); _v2246; });
    ({ rt::Value _v2247 = rt::VS(g::LS[444]); this->f_S__5e__21__23_ = rt::slot_string(_v2247); _v2247; });
    ({ double _v2248 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2248); _v2248; });
}
rt::Value C_S__20__21_c::m_S__21__21_G() {
    RT_FN("S__20__21_c.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0)), rt::V(39960.0)))) {
        (void)(({ rt::Value _o2249 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2250 = rt::as_ptr<C_S_8G>(_o2249); _p2250 ? _p2250->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2249, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__20__21_c::g_S__5d__3b_() {
    RT_FN("S__20__21_c.S__5d__3b__get");
    return true;
    return false;
}
C_S__20__21_c* C_S__20__21_c::alloc_() {
    C_S__20__21_c* o = rt::make<C_S__20__21_c>();
    return o;
}
rt::Value C_S__20__21_c::mk_(rt::Value* a, int n) {
    C_S__20__21_c* o = alloc_();
    o->C_S__20__21_c::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_c::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20__21_c::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20__21_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20__21_c::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20__21_c::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_c__id)); return true;
    case NM_ids: out = g::SV.C_S__20__21_c__ids; return true;
    default: return false;
    }
}
bool C_S__20__21_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_c__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20__21_c__ids = v; return true;
    default: return false;
    }
}
bool C_S__20__21_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__26__21_R::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__26__21_R::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26__21_R.S__26__21_R");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ int32_t _v2251 = l_param1; this->f_S_5w = _v2251; _v2251; });
    ({ rt::Value _v2252 = l_param2; this->f_S__5e__21__23_ = rt::slot_string(_v2252); _v2252; });
    ({ double _v2253 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v2253); _v2253; });
    {
        std::vector<rt::Value> _lst2254;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst2254);
        for (const rt::Value& _x2255 : _lst2254) {
            l_A__loc3_ = _x2255;
            if (((((double)(({ rt::Value _o2256 = l_A__loc3_; C_S__60__21__3b_* _p2257 = rt::as_ptr<C_S__60__21__3b_>(_o2256); _p2257 ? _p2257->f_S__60_r : rt::toint(rt::dget(_o2256, NM_S__60_r)); }))) == ((double)(this->f_S__60_r))) && (((double)(({ rt::Value _o2258 = l_A__loc3_; C_S__60__21__3b_* _p2259 = rt::as_ptr<C_S__60__21__3b_>(_o2258); _p2259 ? _p2259->f_S__2c__21_Y : rt::toint(rt::dget(_o2258, NM_S__2c__21_Y)); }))) == ((double)(this->f_S__2c__21_Y))))) {
                ({ rt::Value _v2260 = l_A__loc3_; this->f_S__25__3c_ = _v2260; _v2260; });
                break;
            }
        }
    }
    ({ rt::Value _v2265 = C_Translation::sm__mn(rt::add(rt::VS(g::LS[874]), ({ rt::Value _o2261 = this->f_S__25__3c_; C_S__60__21__3b_* _p2262 = rt::as_ptr<C_S__60__21__3b_>(_o2261); _p2262 ? _p2262->f_S_1i : rt::dget(_o2261, NM_S_1i); })), rt::add(rt::VS(g::LS[874]), ({ rt::Value _o2263 = this->f_S__25__3c_; C_S__60__21__3b_* _p2264 = rt::as_ptr<C_S__60__21__3b_>(_o2263); _p2264 ? _p2264->f_S__2d_v : rt::dget(_o2263, NM_S__2d_v); })), ((double)(this->f_S_5w)), rt::arr_lit({C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())})); this->f_S_1i = rt::slot_string(_v2265); _v2265; });
    ({ rt::Value _v2266 = rt::trv(rt::VS(g::LS[875]), this->f_S_1i); this->f_S_7_23_ = rt::slot_string(_v2266); _v2266; });
    ({ rt::Value _v2269 = rt::add(rt::VS(g::LS[876]), ({ rt::Value _o2267 = this->f_S__25__3c_; C_S__60__21__3b_* _p2268 = rt::as_ptr<C_S__60__21__3b_>(_o2267); _p2268 ? _p2268->f_S__20_r : rt::dget(_o2267, NM_S__20_r); })); this->f_S__3f__21__3d_ = rt::slot_string(_v2269); _v2269; });
}
rt::Value C_S__26__21_R::m_S__21__21_G() {
    RT_FN("S__26__21_R.S__21__21_G");
    if ((({ bool _t2270 = (!this->f_S_4_21_K); _t2270 ? (bool)((!rt::eq(this->f_S__25__3c_, rt::NUL))) : _t2270; }) && (((double)(({ rt::Value _o2271 = this->f_S__25__3c_; C_S__60__21__3b_* _p2272 = rt::as_ptr<C_S__60__21__3b_>(_o2271); _p2272 ? _p2272->g_S__21_a() : rt::touint(rt::dget(_o2271, NM_S__21_a)); }))) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o2273 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2274 = rt::as_ptr<C_S_8G>(_o2273); _p2274 ? _p2274->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2273, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__26__21_R::m_S_8_5b_() {
    RT_FN("S__26__21_R.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(({ rt::Value _o2275 = this->f_S__25__3c_; C_S__60__21__3b_* _p2276 = rt::as_ptr<C_S__60__21__3b_>(_o2275); _p2276 ? _p2276->g_S__21_a() : rt::touint(rt::dget(_o2275, NM_S__21_a)); }))), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
C_S__26__21_R* C_S__26__21_R::alloc_() {
    C_S__26__21_R* o = rt::make<C_S__26__21_R>();
    return o;
}
rt::Value C_S__26__21_R::mk_(rt::Value* a, int n) {
    C_S__26__21_R* o = alloc_();
    o->C_S__26__21_R::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__26__21_R::dctor_1()));
    return rt::VO(o);
}
bool C_S__26__21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__60_r: out = rt::V((double)(f_S__60_r)); return true;
    case NM_S__25__3c_: out = f_S__25__3c_; return true;
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__26__21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_r: f_S__60_r = rt::toint(v); return true;
    case NM_S__25__3c_: f_S__25__3c_ = v; return true;
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__26__21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__60_r: { rt::Value f = rt::V((double)(f_S__60_r)); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__3c_: { rt::Value f = f_S__25__3c_; out = rt::call_value(f, a, n); return true; }
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__26__21_R::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__60_r: return false;
    case NM_S__25__3c_: return false;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__26__21_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_R::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__20_7::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__20_7::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__20_7.S__20_7");
    ({ double _v2277 = 5.0; this->f_S__60_r = rt::toint_d(_v2277); _v2277; });
    ({ double _v2278 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v2278); _v2278; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2279 = 29.0; this->f_S_6_21_Z = rt::touint_d(_v2279); _v2279; });
}
C_S__20_7* C_S__20_7::alloc_() {
    C_S__20_7* o = rt::make<C_S__20_7>();
    return o;
}
rt::Value C_S__20_7::mk_(rt::Value* a, int n) {
    C_S__20_7* o = alloc_();
    o->C_S__20_7::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__20_7::dctor_1()));
    return rt::VO(o);
}
bool C_S__20_7::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__20_7::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__20_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__20_7::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__20_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_7__id)); return true;
    case NM_ids: out = g::SV.C_S__20_7__ids; return true;
    default: return false;
    }
}
bool C_S__20_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_7__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_7__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20_Q::ctor_() {
    RT_FN("S__20_Q.S__20_Q");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2280 = 84.0; this->f_S_6_21_Z = rt::touint_d(_v2280); _v2280; });
    ({ rt::Value _v2281 = rt::trv(rt::VS(g::LS[581])); this->f_S_1i = rt::slot_string(_v2281); _v2281; });
    ({ rt::Value _v2282 = rt::trv(rt::VS(g::LS[878])); this->f_S_7_23_ = rt::slot_string(_v2282); _v2282; });
    ({ rt::Value _v2283 = rt::VS(g::LS[582]); this->f_S__5e__21__23_ = rt::slot_string(_v2283); _v2283; });
    ({ double _v2284 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2284); _v2284; });
}
rt::Value C_S__20_Q::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__20_Q.S__21__21_G");
    (l_A__loc1_ = false);
    if ((({ bool _t2285 = (!this->f_S_4_21_K); _t2285 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t2285; }) && ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0) || (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)))) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst2286;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2286);
            for (const rt::Value& _x2287 : _lst2286) {
                l_A__loc2_ = _x2287;
                if ((({ bool _t2304 = ({ bool _t2301 = ({ bool _t2298 = ({ bool _t2295 = ({ bool _t2292 = ({ rt::Value _o2288 = l_A__loc2_; C_S__60_6* _p2289 = rt::as_ptr<C_S__60_6>(_o2288); _p2289 ? _p2289->f_S__3c__21_7 : rt::T(rt::dget(_o2288, NM_S__3c__21_7)); }); _t2292 ? (bool)(({ rt::Value _o2290 = l_A__loc2_; C_S__60_6* _p2291 = rt::as_ptr<C_S__60_6>(_o2290); _p2291 ? _p2291->f_S__3c__60_ : rt::T(rt::dget(_o2290, NM_S__3c__60_)); })) : _t2292; }); _t2295 ? (bool)((!(((double)(({ rt::Value _o2293 = l_A__loc2_; C_S__60_6* _p2294 = rt::as_ptr<C_S__60_6>(_o2293); _p2294 ? _p2294->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2293, NM_S__2d__21__5e_)); }))) == 13.0))) : _t2295; }); _t2298 ? (bool)((!(((double)(({ rt::Value _o2296 = l_A__loc2_; C_S__60_6* _p2297 = rt::as_ptr<C_S__60_6>(_o2296); _p2297 ? _p2297->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2296, NM_S__2d__21__5e_)); }))) == 14.0))) : _t2298; }); _t2301 ? (bool)((!(((double)(({ rt::Value _o2299 = l_A__loc2_; C_S__60_6* _p2300 = rt::as_ptr<C_S__60_6>(_o2299); _p2300 ? _p2300->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2299, NM_S__2d__21__5e_)); }))) == 15.0))) : _t2301; }); _t2304 ? (bool)((!(((double)(({ rt::Value _o2302 = l_A__loc2_; C_S__60_6* _p2303 = rt::as_ptr<C_S__60_6>(_o2302); _p2303 ? _p2303->f_S__2c__21_Y : rt::toint(rt::dget(_o2302, NM_S__2c__21_Y)); }))) == 0.0))) : _t2304; }) && ((((double)(({ rt::Value _o2305 = l_A__loc2_; C_S__60_6* _p2306 = rt::as_ptr<C_S__60_6>(_o2305); _p2306 ? _p2306->f_S__2c__21_Y : rt::toint(rt::dget(_o2305, NM_S__2c__21_Y)); }))) == 3.0) || (((double)(({ rt::Value _o2307 = l_A__loc2_; C_S__60_6* _p2308 = rt::as_ptr<C_S__60_6>(_o2307); _p2308 ? _p2308->f_S__2c__21_Y : rt::toint(rt::dget(_o2307, NM_S__2c__21_Y)); }))) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))))) {
                    (l_A__loc1_ = true);
                    break;
                }
                if ((({ bool _t2313 = (!({ rt::Value _o2309 = l_A__loc2_; C_S__60_6* _p2310 = rt::as_ptr<C_S__60_6>(_o2309); _p2310 ? _p2310->f_S__3c__21_7 : rt::T(rt::dget(_o2309, NM_S__3c__21_7)); })); _t2313 ? (bool)(rt::eq(({ rt::Value _o2311 = l_A__loc2_; C_S__60_6* _p2312 = rt::as_ptr<C_S__60_6>(_o2311); _p2312 ? _p2312->f_S__3f__21__3d_ : rt::dget(_o2311, NM_S__3f__21__3d_); }), rt::VS(g::LS[837]))) : _t2313; }) && (((double)(({ rt::Value _o2315 = (({ rt::Value _t2314 = l_A__loc2_; rt::is_class(_t2314, C_S__3b__3d_::CI) ? _t2314 : rt::NUL; })); C_S__3b__3d_* _p2316 = rt::as_ptr<C_S__3b__3d_>(_o2315); _p2316 ? _p2316->f_S__60_r : rt::toint(rt::dget(_o2315, NM_S__60_r)); }))) < 13.0))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o2317 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2318 = rt::as_ptr<C_S_8G>(_o2317); _p2318 ? _p2318->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2317, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__20_Q::g_S__5d__3b_() {
    RT_FN("S__20_Q.S__5d__3b__get");
    return true;
    return false;
}
C_S__20_Q* C_S__20_Q::alloc_() {
    C_S__20_Q* o = rt::make<C_S__20_Q>();
    return o;
}
rt::Value C_S__20_Q::mk_(rt::Value* a, int n) {
    C_S__20_Q* o = alloc_();
    o->C_S__20_Q::ctor_();
    return rt::VO(o);
}
bool C_S__20_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20_Q::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_Q__id)); return true;
    case NM_ids: out = g::SV.C_S__20_Q__ids; return true;
    default: return false;
    }
}
bool C_S__20_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_Q__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_Q__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20_a::ctor_() {
    RT_FN("S__20_a.S__20_a");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2319 = 107.0; this->f_S_6_21_Z = rt::touint_d(_v2319); _v2319; });
    ({ rt::Value _v2320 = rt::trv(rt::VS(g::LS[577])); this->f_S_1i = rt::slot_string(_v2320); _v2320; });
    ({ rt::Value _v2321 = rt::VS(g::LS[578]); this->f_S__5e__21__23_ = rt::slot_string(_v2321); _v2321; });
    ({ double _v2322 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2322); _v2322; });
}
rt::Value C_S__20_a::m_S__40__22_() {
    RT_FN("S__20_a.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[880]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__20_a__S__5e__21_s, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__20_a::m_S__21__21_G() {
    RT_FN("S__20_a.S__21__21_G");
    if ((({ bool _t2323 = (!this->f_S_4_21_K); _t2323 ? (bool)(C_S_8G::sm_S__3c__21_B(g::SV.C_S__27__21__27___id)) : _t2323; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 134.0), rt::V(g::SV.C_S__20_a__S__5e__21_s)))) {
        (void)(({ rt::Value _o2324 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2325 = rt::as_ptr<C_S_8G>(_o2324); _p2325 ? _p2325->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2324, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__20_a* C_S__20_a::alloc_() {
    C_S__20_a* o = rt::make<C_S__20_a>();
    return o;
}
rt::Value C_S__20_a::mk_(rt::Value* a, int n) {
    C_S__20_a* o = alloc_();
    o->C_S__20_a::ctor_();
    return rt::VO(o);
}
bool C_S__20_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20_a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20_a::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_a__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__20_a__S__5e__21_s); return true;
    case NM_ids: out = g::SV.C_S__20_a__ids; return true;
    default: return false;
    }
}
bool C_S__20_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_a__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__20_a__S__5e__21_s = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__20_a__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20_d::ctor_() {
    RT_FN("S__20_d.S__20_d");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2326 = 111.0; this->f_S_6_21_Z = rt::touint_d(_v2326); _v2326; });
    ({ rt::Value _v2327 = rt::trv(rt::VS(g::LS[649])); this->f_S_1i = rt::slot_string(_v2327); _v2327; });
    ({ rt::Value _v2328 = rt::trv(rt::VS(g::LS[882])); this->f_S_7_23_ = rt::slot_string(_v2328); _v2328; });
    ({ rt::Value _v2329 = rt::VS(g::LS[650]); this->f_S__5e__21__23_ = rt::slot_string(_v2329); _v2329; });
    ({ double _v2330 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2330); _v2330; });
}
rt::Value C_S__20_d::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__20_d.S__21__21_G");
    (l_A__loc1_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst2331;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2331);
            for (const rt::Value& _x2332 : _lst2331) {
                l_A__loc2_ = _x2332;
                if ((({ bool _t2335 = rt::is_class(l_A__loc2_, C_S__26__21__5f_::CI); _t2335 ? (bool)((!({ rt::Value _o2333 = l_A__loc2_; C_S__60_6* _p2334 = rt::as_ptr<C_S__60_6>(_o2333); _p2334 ? _p2334->f_S__3f__21_6 : rt::T(rt::dget(_o2333, NM_S__3f__21_6)); }))) : _t2335; }) && (((double)(({ rt::Value _o2337 = (({ rt::Value _t2336 = l_A__loc2_; rt::is_class(_t2336, C_S__26__21__5f_::CI) ? _t2336 : rt::NUL; })); C_S__26__21__5f_* _p2338 = rt::as_ptr<C_S__26__21__5f_>(_o2337); _p2338 ? _p2338->f_S__25_w : rt::toint(rt::dget(_o2337, NM_S__25_w)); }))) <= 270.0))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o2339 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2340 = rt::as_ptr<C_S_8G>(_o2339); _p2340 ? _p2340->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2339, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__20_d::g_S__5d__3b_() {
    RT_FN("S__20_d.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
bool C_S__20_d::g_S__3f__21_a() {
    RT_FN("S__20_d.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__20_d* C_S__20_d::alloc_() {
    C_S__20_d* o = rt::make<C_S__20_d>();
    return o;
}
rt::Value C_S__20_d::mk_(rt::Value* a, int n) {
    C_S__20_d* o = alloc_();
    o->C_S__20_d::ctor_();
    return rt::VO(o);
}
bool C_S__20_d::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20_d::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20_d::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20_d::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20_d::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_d::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_d__id)); return true;
    case NM_ids: out = g::SV.C_S__20_d__ids; return true;
    default: return false;
    }
}
bool C_S__20_d::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_d__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_d__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_d::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20_p::ctor_() {
    RT_FN("S__20_p.S__20_p");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2341 = 9.0; this->f_S_6_21_Z = rt::touint_d(_v2341); _v2341; });
    ({ rt::Value _v2342 = rt::trv(rt::VS(g::LS[884])); this->f_S_1i = rt::slot_string(_v2342); _v2342; });
    ({ rt::Value _v2343 = rt::VS(g::LS[885]); this->f_S__5e__21__23_ = rt::slot_string(_v2343); _v2343; });
    ({ double _v2344 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2344); _v2344; });
}
rt::Value C_S__20_p::m_S__21__21_G() {
    RT_FN("S__20_p.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S_0_21_P__id))) {
        (void)(({ rt::Value _o2345 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2346 = rt::as_ptr<C_S_8G>(_o2345); _p2346 ? _p2346->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2345, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__20_p::m_S__40__22_() {
    RT_FN("S__20_p.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(2000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S__20_p* C_S__20_p::alloc_() {
    C_S__20_p* o = rt::make<C_S__20_p>();
    return o;
}
rt::Value C_S__20_p::mk_(rt::Value* a, int n) {
    C_S__20_p* o = alloc_();
    o->C_S__20_p::ctor_();
    return rt::VO(o);
}
bool C_S__20_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20_p::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20_p::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_p__id)); return true;
    case NM_ids: out = g::SV.C_S__20_p__ids; return true;
    default: return false;
    }
}
bool C_S__20_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_p__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_p__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__21__21__3f_::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__21__21__3f_::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__21__21__3f_.S__21__21__3f_");
    ({ double _v2347 = 10.0; this->f_S__60_r = rt::toint_d(_v2347); _v2347; });
    ({ double _v2348 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v2348); _v2348; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2349 = 15.0; this->f_S_6_21_Z = rt::touint_d(_v2349); _v2349; });
}
C_S__21__21__3f_* C_S__21__21__3f_::alloc_() {
    C_S__21__21__3f_* o = rt::make<C_S__21__21__3f_>();
    return o;
}
rt::Value C_S__21__21__3f_::mk_(rt::Value* a, int n) {
    C_S__21__21__3f_* o = alloc_();
    o->C_S__21__21__3f_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__21__21__3f_::dctor_1()));
    return rt::VO(o);
}
bool C_S__21__21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__21__21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__21__21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__21__21__3f_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__21__21__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21__3f___id)); return true;
    case NM_ids: out = g::SV.C_S__21__21__3f___ids; return true;
    default: return false;
    }
}
bool C_S__21__21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21__3f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__21__3f___ids = v; return true;
    default: return false;
    }
}
bool C_S__21__21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_4::ctor_() {
    RT_FN("S__21__21_4.S__21__21_4");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2350 = 89.0; this->f_S_6_21_Z = rt::touint_d(_v2350); _v2350; });
    ({ rt::Value _v2351 = rt::trv(rt::VS(g::LS[493])); this->f_S_1i = rt::slot_string(_v2351); _v2351; });
    ({ rt::Value _v2352 = rt::VS(g::LS[494]); this->f_S__5e__21__23_ = rt::slot_string(_v2352); _v2352; });
    ({ double _v2353 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2353); _v2353; });
}
rt::Value C_S__21__21_4::m_S__40__22_() {
    RT_FN("S__21__21_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[889]), C_S__26_c::sm_S_8_21_Z(30000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__21__21_4::m_S__21__21_G() {
    RT_FN("S__21__21_4.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 47.0), rt::V(30000.0)))) {
        (void)(({ rt::Value _o2354 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2355 = rt::as_ptr<C_S_8G>(_o2354); _p2355 ? _p2355->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2354, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__21__21_4::g_S__5d__3b_() {
    RT_FN("S__21__21_4.S__5d__3b__get");
    return (!C_S_8G::sm_S__3c_P(g::SV.C_S__5d_m__id));
    return false;
}
bool C_S__21__21_4::g_S__3f__21_a() {
    RT_FN("S__21__21_4.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__21__21_4* C_S__21__21_4::alloc_() {
    C_S__21__21_4* o = rt::make<C_S__21__21_4>();
    return o;
}
rt::Value C_S__21__21_4::mk_(rt::Value* a, int n) {
    C_S__21__21_4* o = alloc_();
    o->C_S__21__21_4::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__21__21_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__21__21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__21__21_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__21__21_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_4__id)); return true;
    case NM_ids: out = g::SV.C_S__21__21_4__ids; return true;
    default: return false;
    }
}
bool C_S__21__21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_4__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__21_4__ids = v; return true;
    default: return false;
    }
}
bool C_S__21__21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_E::ctor_() {
    RT_FN("S__21__21_E.S__21__21_E");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2356 = 173.0; this->f_S_6_21_Z = rt::touint_d(_v2356); _v2356; });
    ({ rt::Value _v2357 = rt::trv(rt::VS(g::LS[647])); this->f_S_1i = rt::slot_string(_v2357); _v2357; });
    ({ rt::Value _v2358 = rt::trv(rt::VS(g::LS[891])); this->f_S_7_23_ = rt::slot_string(_v2358); _v2358; });
    ({ rt::Value _v2359 = rt::VS(g::LS[648]); this->f_S__5e__21__23_ = rt::slot_string(_v2359); _v2359; });
    ({ double _v2360 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2360); _v2360; });
}
rt::Value C_S__21__21_E::m_S__21__21_G() {
    RT_FN("S__21__21_E.S__21__21_G");
    if (((!this->f_S_4_21_K) && (C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) == 4767.0))) {
        (void)(({ rt::Value _o2361 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2362 = rt::as_ptr<C_S_8G>(_o2361); _p2362 ? _p2362->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2361, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__21__21_E::g_S__5d__3b_() {
    RT_FN("S__21__21_E.S__5d__3b__get");
    return true;
    return false;
}
C_S__21__21_E* C_S__21__21_E::alloc_() {
    C_S__21__21_E* o = rt::make<C_S__21__21_E>();
    return o;
}
rt::Value C_S__21__21_E::mk_(rt::Value* a, int n) {
    C_S__21__21_E* o = alloc_();
    o->C_S__21__21_E::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__21__21_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__21__21_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__21__21_E::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__21__21_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_E__id)); return true;
    default: return false;
    }
}
bool C_S__21__21_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__21_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_X::ctor_() {
    RT_FN("S__21__21_X.S__21__21_X");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2363 = 88.0; this->f_S_6_21_Z = rt::touint_d(_v2363); _v2363; });
    ({ rt::Value _v2364 = rt::trv(rt::VS(g::LS[693])); this->f_S_1i = rt::slot_string(_v2364); _v2364; });
    ({ rt::Value _v2365 = rt::trv(rt::VS(g::LS[892])); this->f_S_7_23_ = rt::slot_string(_v2365); _v2365; });
    ({ rt::Value _v2366 = rt::VS(g::LS[694]); this->f_S__5e__21__23_ = rt::slot_string(_v2366); _v2366; });
    ({ double _v2367 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2367); _v2367; });
}
bool C_S__21__21_X::g_S__5d__3b_() {
    RT_FN("S__21__21_X.S__5d__3b__get");
    return true;
    return false;
}
C_S__21__21_X* C_S__21__21_X::alloc_() {
    C_S__21__21_X* o = rt::make<C_S__21__21_X>();
    return o;
}
rt::Value C_S__21__21_X::mk_(rt::Value* a, int n) {
    C_S__21__21_X* o = alloc_();
    o->C_S__21__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__21__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__21__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__21__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__21__21_X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_X__id)); return true;
    case NM_ids: out = g::SV.C_S__21__21_X__ids; return true;
    default: return false;
    }
}
bool C_S__21__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_X__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__21_X__ids = v; return true;
    default: return false;
    }
}
bool C_S__21__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_m::ctor_() {
    RT_FN("S__21__21_m.S__21__21_m");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2368 = 258.0; this->f_S_6_21_Z = rt::touint_d(_v2368); _v2368; });
    ({ rt::Value _v2369 = rt::VS(g::LS[894]); this->f_S_1i = rt::slot_string(_v2369); _v2369; });
    ({ rt::Value _v2370 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2370); _v2370; });
    ({ rt::Value _v2371 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2371); _v2371; });
    ({ double _v2372 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2372); _v2372; });
    ({ bool _v2373 = true; this->f_S_3_21_9 = _v2373; _v2373; });
}
C_S__21__21_m* C_S__21__21_m::alloc_() {
    C_S__21__21_m* o = rt::make<C_S__21__21_m>();
    return o;
}
rt::Value C_S__21__21_m::mk_(rt::Value* a, int n) {
    C_S__21__21_m* o = alloc_();
    o->C_S__21__21_m::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_m::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__21__21_m::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__21__21_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__21__21_m::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__21__21_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_m__id)); return true;
    default: return false;
    }
}
bool C_S__21__21_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__21_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21_Q::ctor_() {
    RT_FN("S__21_Q.S__21_Q");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2374 = 1.0; this->f_S_6_21_Z = rt::touint_d(_v2374); _v2374; });
    ({ rt::Value _v2375 = rt::VS(g::LS[895]); this->f_S_1i = rt::slot_string(_v2375); _v2375; });
    ({ rt::Value _v2376 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2376); _v2376; });
    ({ rt::Value _v2377 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2377); _v2377; });
    ({ double _v2378 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2378); _v2378; });
    ({ bool _v2379 = true; this->f_S_3_21_9 = _v2379; _v2379; });
}
C_S__21_Q* C_S__21_Q::alloc_() {
    C_S__21_Q* o = rt::make<C_S__21_Q>();
    return o;
}
rt::Value C_S__21_Q::mk_(rt::Value* a, int n) {
    C_S__21_Q* o = alloc_();
    o->C_S__21_Q::ctor_();
    return rt::VO(o);
}
bool C_S__21_Q::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__21_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__21_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__21_Q::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__21_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_Q__id)); return true;
    case NM_ids: out = g::SV.C_S__21_Q__ids; return true;
    default: return false;
    }
}
bool C_S__21_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_Q__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21_Q__ids = v; return true;
    default: return false;
    }
}
bool C_S__21_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_2(std::vector<std::string>& errs) {
    try { (g::SV.C_S__20__21_V__ids = rt::arr_lit({rt::VS(g::LS[781])})); } catch (...) { errs.push_back(std::string("S__20__21_V.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__22_0__S__25__22__2b_ = 1e+60); } catch (...) { errs.push_back(std::string("S__2c__22_0.S__25__22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_v__ids = rt::arr_lit({rt::VS(g::LS[791])})); } catch (...) { errs.push_back(std::string("S__21_v.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_0__S_7m = 1e+20); } catch (...) { errs.push_back(std::string("S__25__22_0.S_7m: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_0__S__27__21_I = 5000000.0); } catch (...) { errs.push_back(std::string("S__25__22_0.S__27__21_I: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_0__S__2c__26_ = 1e+50); } catch (...) { errs.push_back(std::string("S__25__22_0.S__2c__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_0__S_9x = 350000.0); } catch (...) { errs.push_back(std::string("S__25__22_0.S_9x: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_0__S__3c__21_Y = 1e+16); } catch (...) { errs.push_back(std::string("S__25__22_0.S__3c__21_Y: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_F__ids = rt::arr_lit({rt::VS(g::LS[804])})); } catch (...) { errs.push_back(std::string("S__3f__21_F.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_21__5b___ids = rt::arr_lit({rt::VS(g::LS[812])})); } catch (...) { errs.push_back(std::string("S_4_21__5b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21__23___ids = rt::arr_lit({rt::VS(g::LS[820])})); } catch (...) { errs.push_back(std::string("S_6_21__23_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21__2b___ids = rt::arr_lit({rt::VS(g::LS[824])})); } catch (...) { errs.push_back(std::string("S_6_21__2b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_D__S_9_21__5b_ = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__3b__21_D.S_9_21__5b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__3d___S_9_21__5b_ = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__3b__3d_.S_9_21__5b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__3d___S__2b__21_Q = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__3b__3d_.S__2b__21_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b_D__ids = rt::arr_lit({rt::VS(g::LS[849])})); } catch (...) { errs.push_back(std::string("S__3b_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b_J__ids = rt::arr_lit({rt::VS(g::LS[853])})); } catch (...) { errs.push_back(std::string("S__3b_J.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_i__S_7_21_i = 600.0); } catch (...) { errs.push_back(std::string("S__3d__21_i.S_7_21_i: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22__27___S__25__22__2b_ = 1e+50); } catch (...) { errs.push_back(std::string("S__5e__22__27_.S__25__22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__60_x__ids = rt::arr_lit({rt::VS(g::LS[866])})); } catch (...) { errs.push_back(std::string("S__60_x.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_B__ids = rt::arr_lit({rt::VS(g::LS[871])})); } catch (...) { errs.push_back(std::string("S__20__21_B.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_c__ids = rt::arr_lit({rt::VS(g::LS[873])})); } catch (...) { errs.push_back(std::string("S__20__21_c.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_7__ids = rt::arr_lit({rt::VS(g::LS[877])})); } catch (...) { errs.push_back(std::string("S__20_7.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_Q__ids = rt::arr_lit({rt::VS(g::LS[879])})); } catch (...) { errs.push_back(std::string("S__20_Q.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_a__S__5e__21_s = 5.0); } catch (...) { errs.push_back(std::string("S__20_a.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_a__ids = rt::arr_lit({rt::VS(g::LS[881])})); } catch (...) { errs.push_back(std::string("S__20_a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_d__ids = rt::arr_lit({rt::VS(g::LS[883])})); } catch (...) { errs.push_back(std::string("S__20_d.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_p__ids = rt::arr_lit({rt::VS(g::LS[887])})); } catch (...) { errs.push_back(std::string("S__20_p.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21__3f___ids = rt::arr_lit({rt::VS(g::LS[888])})); } catch (...) { errs.push_back(std::string("S__21__21__3f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21_4__ids = rt::arr_lit({rt::VS(g::LS[890])})); } catch (...) { errs.push_back(std::string("S__21__21_4.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21_X__ids = rt::arr_lit({rt::VS(g::LS[893])})); } catch (...) { errs.push_back(std::string("S__21__21_X.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_Q__ids = rt::arr_lit({rt::VS(g::LS[896])})); } catch (...) { errs.push_back(std::string("S__21_Q.ids: ") + rt::exc_text()); }
}
}  // namespace g
