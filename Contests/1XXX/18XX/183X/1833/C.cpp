#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::vector<int> V(N);
        std::set<int> O;

        for (int i = 0; i < N; i++) {
            std::cin >> V[i];
            if (V[i] % 2 == 1) O.insert(V[i]);
        }

        bool bro = false, bre = false;
        for (int i = 0; i < N; i++) {
            auto it = O.lower_bound(V[i]);
            if (V[i] % 2 == 0) bro |= it == O.begin();
            else bre |= it == O.begin();
        }

        std::cout << (bro && bre ? "NO" : "YES") << "\n";
    }
}
