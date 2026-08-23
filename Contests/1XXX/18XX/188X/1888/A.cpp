#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        std::string S; std::cin >> S;
        int curr = 1, ans = 4;

        for (int i = 0; i < 4; i++) {
            int val = S[i] - '0';
            if (val == 0) val += 10;
            ans += std::abs(curr - val);
            curr = val;
        }

        std::cout << ans << "\n";
    }
}
