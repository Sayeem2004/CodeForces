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

        std::vector<int> V;
        for (int i = 0; i < N; i++) {
            if (S[i] == 'B') V.push_back(i);
        }

        int ans = 0;
        if (V.size() != 0) {
            int prev = V[0]; ans++;
            for (int i = 1; i < V.size(); i++) {
                if (V[i] - prev >= K) { ans++; prev = V[i]; }
            }
        }

        std::cout << ans << "\n";
    }
}
