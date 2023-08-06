#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, K; std::cin >> N >> K;
        std::vector<int> V(N);
        for (int &v : V) std::cin >> v;
        std::sort(V.begin(), V.end());

        std::vector<int> D;
        int prev = 0;
        for (int i = 1; i < N; i++) {
            if (V[i] - V[i-1] > K) {
                if (prev == -1) { D.push_back(i); prev = i; }
                else { D.push_back(i - prev); prev = i; }
            }
        }

        if (prev == 0) D.push_back(N);
        else D.push_back(N - prev);

        std::sort(D.begin(), D.end());
        std::cout << N - D.back() << "\n";
    }
}
