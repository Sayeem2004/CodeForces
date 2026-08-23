#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);
    int T; std::cin >> T; while (T--) {
        int N, M, K; std::cin >> N >> M >> K;
        std::string S; std::cin >> S;

        int MIN = M, MAX = M;
        for (char c : S) {
            if (MIN >= N) break;
            if (c == '-') MIN--; else { MIN++; MAX++; }
        }

        if (MIN >= N) std::cout << "YES\n";
        else if (MAX >= N) std::cout << "MAYBE\n";
        else std::cout << "NO\n";
    }
}
