#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int A, B, C; std::cin >> A >> B >> C;
        std::cout << std::min(A, B+C+1) + std::min(B+C, A-1) << "\n";
    }
}
