#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, K; std::cin >> N >> K;
        std::string S; std::cin >> S;

        std::map<char, int> MP;
        for (int i = 0; i < N; ++i) MP[S[i]]++;

        int ans = 0;
        for (std::pair<char, int> p : MP) ans += p.second % 2;

        if (ans > K+1) std::cout << "NO\n";
        else std::cout << "YES\n";
    }
}
