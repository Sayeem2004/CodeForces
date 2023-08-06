#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        long long N; std::cin >> N;
        for (long long i = 1; i <= N+1; i++) {
            if (N % i != 0) { std::cout << i-1 << "\n"; break; }
        }
    }
}
