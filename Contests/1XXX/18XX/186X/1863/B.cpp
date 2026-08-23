#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::map<int, int> MP;
        for (int i = 0; i < N; i++) { int x; std::cin >> x; MP[x] = i; }

        int CNT = 0;
        for (int i = 1; i < N; i++) if (MP[i] < MP[i + 1]) CNT++;
        std::cout << N - CNT - 1 << "\n";
    }
}
