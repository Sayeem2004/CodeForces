#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, P = 0; std::cin >> N;
        std::unordered_map<int, int> MP1, MP2;

        for (int i = 1; i <= N; i++) {
            for (int q = i; q <= N; q *= 2) {
                if (MP1.find(q) == MP1.end()) MP2[P++] = q; MP1[q]++;
            }
        }

        for (int i = 0; i < N; i++) std::cout << MP2[i] << " ";
        std::cout << "\n";
    }
}
