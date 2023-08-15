#include <bits/stdc++.h>

bool solve(int n, int m) {
    if (n == m) return true;
    if (n % 3 != 0) return false;
    return solve(n / 3, m) || solve(n / 3 * 2, m);
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, M; std::cin >> N >> M;
        std::cout << (solve(N, M) ? "YES" : "NO") << "\n";
    }
}
