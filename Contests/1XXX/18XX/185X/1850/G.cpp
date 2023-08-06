#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::map<long long, long long> X, Y, D1, D2;

        for (int i = 0; i < N; i++) {
            long long x, y; std::cin >> x >> y;
            X[x]++; Y[y]++;
            D1[x - y]++; D2[x + y]++;
        }

        long long ans = 0;
        for (auto [k, v] : X) ans += v * (v - 1);
        for (auto [k, v] : Y) ans += v * (v - 1);
        for (auto [k, v] : D1) ans += v * (v - 1);
        for (auto [k, v] : D2) ans += v * (v - 1);

        std::cout << ans << "\n";
    }
}
