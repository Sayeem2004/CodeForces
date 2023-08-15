#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        int ans = 0, cnt = 0;

        for (int i = 0; i < N; i++) {
            int x; std::cin >> x;
            if (x == 1) cnt = 0; else cnt++;
            ans = std::max(ans, cnt);
        }

        std::cout << ans << "\n";
    }
}
