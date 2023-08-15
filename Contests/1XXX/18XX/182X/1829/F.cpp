#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, M; std::cin >> N >> M;

        std::vector<std::vector<int>> ADJ(N);
        for (int i = 0; i < M; i++) {
            int u, v; std::cin >> u >> v;
            ADJ[u-1].push_back(v-1);
            ADJ[v-1].push_back(u-1);
        }

        std::map<int, int> MP;
        for (int i = 0; i < N; i++) if (ADJ[i].size() > 1) MP[ADJ[i].size()]++;

        if (MP.size() == 1) {
            for (auto [k, v] : MP) { std::cout << k << " " << k-1 << "\n"; }
            continue;
        }

        for (auto [k, v] : MP) { if (v == 1) std::cout << k << " "; }
        for (auto [k, v] : MP) { if (v > 1) std::cout << k-1 << "\n"; }
    }
}
