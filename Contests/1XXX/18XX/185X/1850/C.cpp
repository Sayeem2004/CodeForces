#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        std::map<int, std::string> M;
        for (int i = 0; i < 8; i++) M[i] = "";

        for (int i = 0; i < 8; i++) {
            for (int q = 0; q < 8; q++) {
                char c; std::cin >> c;
                if (c != '.') M[q] += c;
            }
        }

        for (int i = 0; i < 8; i++) {
            if (M[i] != "") {
                std::cout << M[i] << "\n";
                break;
            }
        }
    }
}
