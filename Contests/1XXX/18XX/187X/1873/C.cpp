#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        std::vector<std::string> V(10);
        for (std::string &v : V) std::cin >> v;

        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            for (int q = 0; q < 10; q++) {
                if (V[i][q] == 'X') {
                    int rv = std::min(i+1, 10-i);
                    int cv = std::min(q+1, 10-q);
                    cnt += std::min(rv, cv);
                }
            }
        }

        std::cout << cnt << "\n";
    }
}
