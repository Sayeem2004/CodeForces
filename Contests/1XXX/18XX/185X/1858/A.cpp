#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int A, B, C; std::cin >> A >> B >> C;
        if (C % 2 == 1) B--;
        std::cout << (A > B ? "First" : "Second") << "\n";
    }
}
