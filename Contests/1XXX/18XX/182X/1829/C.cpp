#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        int a = 1e9, b = 1e9, c = 1e9;
        for (int i = 0; i < N; i++) {
            int x; std::cin >> x;
            char y, z; std::cin >> y >> z;
            if (y == '1') a = std::min(a, x);
            if (z == '1') b = std::min(b, x);
            if (y == '1' && z == '1') c = std::min(c, x);
        }

        int ans = std::min(a + b, c);
        std::cout << (ans == 1e9 ? -1 : ans) << "\n";
    }
}
