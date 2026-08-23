#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, K; std::cin >> N >> K; K %= (N+1);
        std::vector<int> A(N+1), B(N+1);
        for (int i = 0; i < N; i++) { std::cin >> A[i]; B[A[i]] = 1; }
        for (int i = 0; i <= N; i++) if (!B[i]) { A[N] = i; break; }

        for (int i = 0; i < N; i++) std::cout << A[(i-K+N+1) % (N+1)] << " ";
        std::cout << "\n";
    }
}
