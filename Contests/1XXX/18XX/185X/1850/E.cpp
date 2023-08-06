#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        long long N, C; std::cin >> N >> C;
        std::vector<long long> V(N);
        for (long long& v : V) std::cin >> v;

        long long l = 0, r = 1e9;
        while (l < r) {
            long long m = (l + r) / 2;
            long long cnt = 0;
            for (int i = 0; i < N; i++) {
                cnt += (V[i] + 2 * m) * (V[i] + 2 * m);
                if (cnt > C) break;
            }

            if (cnt == C) { std::cout << m << "\n"; break; }
            else if (cnt < C) l = m + 1;
            else r = m;
        }
    }
}
