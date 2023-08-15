#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::unordered_set<int> S;
        for (int i = 0; i < N; i++) { int x; std::cin >> x; S.insert(x); }

        if (S.size() >= 3) std::cout << N << "\n";
        else std::cout << N/2 + 1 << "\n";
    }
}
