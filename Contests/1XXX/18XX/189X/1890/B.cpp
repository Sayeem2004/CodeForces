#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, M; std::cin >> N >> M;
        std::string S, R; std::cin >> S >> R;

        bool goodS = true, goodR = true;
        for (int i = 1; i < M; i++) if (R[i] == R[i-1]) goodR = false;

        for (int i = 1; i < N; i++) {
            if (S[i] == S[i-1]) {
                if (goodR && S[i-1] != R[0] && S[i] != R[M-1]) continue;
                goodS = false; break;
            }
        }

        std::cout << (goodS ? "Yes\n" : "No\n");
    }
}
