#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        std::string S; std::cin >> S;
        int cnt = 0;

        if (S[0] != 'a') cnt++;
        if (S[1] != 'b') cnt++;
        if (S[2] != 'c') cnt++;

        if (cnt > 2) std::cout << "NO\n";
        else std::cout << "YES\n";
    }
}
