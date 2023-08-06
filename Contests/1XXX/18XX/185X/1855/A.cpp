#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, CNT = 0; std::cin >> N;
        for (int i = 1; i <= N; i++) {
            int x; std::cin >> x;
            if (x == i) CNT++;
        }

        std::cout << (CNT+1) / 2 << "\n";
    }
}
