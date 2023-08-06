#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int A, B, C; std::cin >> A >> B >> C;
        if (A + B >= 10 || A + C >= 10 || B + C >= 10) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
}
