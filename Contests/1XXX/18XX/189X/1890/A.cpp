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

        std::map<int, int> M;
        for (int v : V) M[v]++;

        if (M.size() > 2) { std::cout << "No\n"; continue; }
        if (std::abs(M[V[0]] - M[V[N-1]]) > 1) { std::cout << "No\n"; continue; }
        std::cout << "Yes\n";
    }
}
