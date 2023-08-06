#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, K; std::cin >> N >> K;
        std::vector<int> V(N);
        for (int &v : V) std::cin >> v;

        if (V[0] == V[N-1]) {
            int cnt = 0;
            for (int i = 0; i < N; i++) if (V[0] == V[i]) cnt++;
            std::cout << (cnt >= K ? "YES" : "NO") << "\n";
        } else {
            int cntl = 0, posl = -1;
            int cntr = 0, posr = -1;
            for (int i = 0; i < N; i++) {
                if (V[0] == V[i]) {
                    cntl++; if (cntl == K) posl = i;
                }
            }
            for (int i = N-1; i >= 0; i--) {
                if (V[N-1] == V[i]) {
                    cntr++; if (cntr == K) posr = i;
                }
            }

            if (cntl >= K && cntr >= K && posl < posr) std::cout << "YES\n";
            else std::cout << "NO\n";
        }
    }
}
