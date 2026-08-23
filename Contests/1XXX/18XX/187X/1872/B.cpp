#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        int ans = 1e9;
        for (int i = 0; i < N; i++) {
            int a, b; std::cin >> a >> b;
            ans = std::min(ans, a + (b-1)/2);
        }

        std::cout << ans << "\n";
    }
}
