#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, M, K, H; std::cin >> N >> M >> K >> H;
        int ans = 0;

        for (int i = 0; i < N; i++) {
            int x; std::cin >> x; x = std::abs(x - H);
            if (x % K == 0 && x / K <= M-1 && x >= K) ans++;
        }

        std::cout << ans << "\n";
    }
}
