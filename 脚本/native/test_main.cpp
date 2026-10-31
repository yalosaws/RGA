// 原生引擎的启动和推进测试（不经过 Python）：
//   RG_TICKS=300 RG_STEP=30 rgtest.exe <存档文本文件> <时间戳文件>
// 输出格式和 脚本/native/cmp_ref.py 相同，便于逐行对照。
#include "gen.h"
#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <algorithm>

using namespace rt;

static int nm(const char* s) {
    int id = name_id(s);
    if (id < 0) { std::fprintf(stderr, "没有名字 %s\n", s); std::exit(2); }
    return id;
}

static std::string read_file(const char* p) {
    std::ifstream f(p, std::ios::binary);
    std::stringstream ss;
    ss << f.rdbuf();
    std::string t = ss.str();
    while (!t.empty() && (t.back() == '\n' || t.back() == '\r' || t.back() == ' ')) t.pop_back();
    return t;
}

static std::string S(const Value& v) { return to_utf8(tostr(v)); }

int main(int argc, char** argv) {
    if (argc < 3) { std::fprintf(stderr, "用法：rgtest 存档文本 时间戳文件\n"); return 2; }
    auto t0 = std::chrono::steady_clock::now();
    rt_init();
    g::boot_init();
    SO_SAVE_TEXT = VS(str_utf8(read_file(argv[1])));
    CLOCK.timestamp = std::atof(read_file(argv[2]).c_str());
    CLOCK.timer_ms = 0;
    RNG.seed_int(0);
    std::vector<std::string> errs;
    g::static_init(errs);
    std::printf("静态初始化错误 %zu\n", errs.size());
    try {
        Value G = VO(g::C_S_8G::CI.ref);
        Value game = callv(G);
        dcallv(game, nm("S__5b__21_C"));
        g::HOOK_no_timewarp = true;
        dcallv(game, nm("S__25_R"));
        g::HOOK_no_timewarp = false;
        Value H = VO(g::C_RgaHarness::CI.ref);
        dcallv(H, nm("afterLoad"), game, UNDEF);
        auto t1 = std::chrono::steady_clock::now();
        std::printf("启动+载入 %.3fs gold=%s\n", std::chrono::duration<double>(t1 - t0).count(), S(dget(G, nm("S__40_e"))).c_str());
        const char* nt = std::getenv("RG_TICKS");
        if (nt) {
            dset(game, nm("S_8_21_O"), VO(HEADLESS));
            dset(VO(g::C_S__20_g::CI.ref), nm("S__3e__21_a"), VO(HEADLESS));
            int n = std::atoi(nt), step = std::getenv("RG_STEP") ? std::atoi(std::getenv("RG_STEP")) : n;
            auto* gp = static_cast<g::C_S_8G*>(game.o);
            int done = 0;
            while (done < n) {
                int k = std::min(step, n - done);
                for (int i = 0; i < k; i++) {
                    CLOCK.timestamp += 1.0 / 30;
                    CLOCK.timer_ms += 1000.0 / 30;
                    gp->m_S__2d__21_R(1u);
                }
                done += k;
                std::printf("t=%d gold=%s mana=%s stat0=%s\n", done, S(dget(G, nm("S__40_e"))).c_str(),
                            S(dget(G, nm("S_0_21__20_"))).c_str(), S(idx_get(dget(G, nm("S_5_21_V")), V(0))).c_str());
            }
            auto t2 = std::chrono::steady_clock::now();
            std::printf("%d tick %.3fs\n", n, std::chrono::duration<double>(t2 - t1).count());
        }
    } catch (Thrown& t) {
        std::printf("AS3 异常：%s\n", S(t.v).c_str());
        return 1;
    } catch (RtError& e) {
        std::printf("运行时错误：%s\n", e.msg.c_str());
        return 1;
    }
    return 0;
}
