#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::vector<long long> V(N);
        for (long long &v : V) std::cin >> v;

        std::sort(V.begin(), V.end()); V[0]++;

        long long ans = 1;
        for (int i = 0; i < N; i++) ans *= V[i];
        std::cout << ans << "\n";
    }
}
