#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        int best = 0, pos = -1;

        for (int i = 0; i < N; i++) {
            int a, b; std::cin >> a >> b;
            if (a <= 10 && b > best) { best = b; pos = i; }
        }

        std::cout << pos + 1 << "\n";
    }
}
