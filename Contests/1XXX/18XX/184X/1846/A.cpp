#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        int cnt = 0;

        for (int i = 0; i < N; i++) {
            int a, b; std::cin >> a >> b;
            cnt += (a > b);
        }

        std::cout << cnt << "\n";
    }
}
