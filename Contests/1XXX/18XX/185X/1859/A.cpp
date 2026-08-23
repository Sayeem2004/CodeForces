#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::vector<int> V(N);
        for (int &v : V) std::cin >> v;

        std::sort(V.begin(), V.end());
        int pos = N-1; while (pos > 0 && V[pos] == V[pos-1]) --pos;

        if (pos == 0) {
            std::cout << -1 << "\n";
            continue;
        }

        std::cout << pos << " " << N-pos << "\n";
        for (int i = 0; i < pos; i++) std::cout << V[i] << " ";
        std::cout << "\n";
        for (int i = pos; i < N; i++) std::cout << V[i] << " ";
        std::cout << "\n";
    }
}
