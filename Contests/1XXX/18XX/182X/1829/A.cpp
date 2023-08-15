#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        std::string S; std::cin >> S;
        std::string C = "codeforces";

        int cnt = 0;
        for (int i = 0; i < S.size(); i++) {
            if (S[i] != C[i]) cnt++;
        }

        std::cout << cnt << "\n";
    }
}
