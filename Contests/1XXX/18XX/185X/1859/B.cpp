#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        long long N; std::cin >> N;
        std::vector<std::vector<long long>> V(N);
        for (int i = 0; i < N; i++) {
            long long M; std::cin >> M;
            for (int q = 0; q < M; q++) {
                long long x; std::cin >> x;
                V[i].push_back(x);
            }
            std::sort(V[i].begin(), V[i].end());
        }

        long long pos1 = 0, mn1 = V[0][0], sm = 0;
        long long pos2 = 0, mn2 = V[0][1];
        for (int i = 0; i < N; i++) {
            sm += V[i][1];
            if (V[i][0] < mn1) { mn1 = V[i][0]; pos1 = i; }
            if (V[i][1] < mn2) { mn2 = V[i][1]; pos2 = i; }
        }

        sm -= V[pos2][1]; sm += V[pos1][0];
        std::cout << sm << "\n";
    }
}
