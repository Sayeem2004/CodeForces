#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::string S; std::cin >> S;
        std::set<std::string> ST;

        for (int i = 0; i < N - 1; i++) ST.insert(S.substr(i, 2));
        std::cout << ST.size() << "\n";
    }
}
