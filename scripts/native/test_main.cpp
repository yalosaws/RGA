// 原生引擎的启动和推进测试（不经过 Python）：
//   RG_TICKS=300 RG_STEP=30 rgtest.exe <存档文本文件> <时间戳文件>
// 输出格式和 scripts/native/cmp_ref.py 相同，便于逐行对照。
#include "gen.h"
#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <algorithm>
#include <thread>
#include <atomic>
#include <map>
#include <windows.h>
#include <dbghelp.h>

// 采样分析（RG_SAMPLE=1）：另开线程每毫秒暂停主线程一次，记下它正在执行的地址，最后按函数汇总
static std::atomic<bool> SAMPLING{false};
static std::vector<std::vector<DWORD64>> SAMPLES;   // 每次采样：调用栈（最内层在前）
static void sampler(HANDLE th) {
    timeBeginPeriod(1);
    HANDLE pr = GetCurrentProcess();
    while (SAMPLING) {
        Sleep(1);
        if (SuspendThread(th) == (DWORD)-1) break;
        CONTEXT c;
        c.ContextFlags = CONTEXT_FULL;
        if (GetThreadContext(th, &c)) {
            STACKFRAME64 f{};
            f.AddrPC.Offset = c.Rip; f.AddrPC.Mode = AddrModeFlat;
            f.AddrFrame.Offset = c.Rbp; f.AddrFrame.Mode = AddrModeFlat;
            f.AddrStack.Offset = c.Rsp; f.AddrStack.Mode = AddrModeFlat;
            std::vector<DWORD64> st;
            for (int i = 0; i < 12; i++) {
                if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, pr, th, &f, &c, nullptr, SymFunctionTableAccess64,
                                 SymGetModuleBase64, nullptr) || !f.AddrPC.Offset) break;
                st.push_back(f.AddrPC.Offset);
            }
            SAMPLES.push_back(st);
        }
        ResumeThread(th);
    }
}
static std::string symname(DWORD64 a) {
    static std::map<DWORD64, std::string> cache;
    auto it = cache.find(a);
    if (it != cache.end()) return it->second;
    char buf[sizeof(SYMBOL_INFO) + 512];
    SYMBOL_INFO* si = (SYMBOL_INFO*)buf;
    si->SizeOfStruct = sizeof(SYMBOL_INFO);
    si->MaxNameLen = 500;
    DWORD64 disp = 0;
    std::string n = SymFromAddr(GetCurrentProcess(), a, &disp, si) ? std::string(si->Name) : "?";
    if (n.size() > 70) n = n.substr(0, 70);
    return cache[a] = n;
}
static void sample_report() {
    std::map<std::string, int> self, incl;
    std::map<std::string, std::map<std::string, int>> callers;
    for (auto& st : SAMPLES) {
        if (st.empty()) continue;
        std::vector<std::string> ns;
        for (auto a : st) ns.push_back(symname(a));
        self[ns[0]]++;
        std::map<std::string, bool> seen;
        for (auto& n : ns) if (!seen[n]) { seen[n] = true; incl[n]++; }
        // 运行时函数（rt::、std::、C 库）的调用者：往上找第一个生成的游戏函数
        for (size_t i = 1; i < ns.size(); i++)
            if (ns[i].rfind("g::", 0) == 0) { callers[ns[0]][ns[i]]++; break; }
    }
    auto top = [](std::map<std::string, int>& m, size_t k) {
        std::vector<std::pair<int, std::string>> v;
        for (auto& kv : m) v.push_back({kv.second, kv.first});
        std::sort(v.rbegin(), v.rend());
        if (v.size() > k) v.resize(k);
        return v;
    };
    double n = (double)SAMPLES.size();
    std::printf("采样 %zu 次\n自身时间：\n", SAMPLES.size());
    for (auto& r : top(self, 25)) {
        std::printf("  %5.1f%%  %s\n", 100 * r.first / n, r.second.c_str());
        if (r.second.rfind("g::", 0) != 0)
            for (auto& c : top(callers[r.second], 4)) std::printf("            ← %4.1f%%  %s\n", 100 * c.first / n, c.second.c_str());
    }
    std::printf("连同调用的总时间：\n");
    for (auto& r : top(incl, 40)) std::printf("  %5.1f%%  %s\n", 100 * r.first / n, r.second.c_str());
}
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
            std::thread smp;
            if (std::getenv("RG_SAMPLE")) {
                SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS);
                SymInitialize(GetCurrentProcess(), nullptr, TRUE);
                HANDLE th;
                DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &th, 0, FALSE,
                                DUPLICATE_SAME_ACCESS);
                SAMPLING = true;
                smp = std::thread(sampler, th);
            }
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
            if (smp.joinable()) { SAMPLING = false; smp.join(); sample_report(); }
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
