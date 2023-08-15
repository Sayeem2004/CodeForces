#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, A, B; std::cin >> N >> A >> B;
        if (N-1 > A+B || N == A && N == B) std::cout << "Yes\n";
        else std::cout << "No\n";
    }
}
