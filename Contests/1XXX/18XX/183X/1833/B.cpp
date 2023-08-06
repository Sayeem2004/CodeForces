#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, K; std::cin >> N >> K;
        std::vector<std::pair<int, int>> A(N);
        std::vector<int> B(N);

        for (int i = 0; i < N; i++) { std::cin >> A[i].first; A[i].second = i; }
        for (int &b : B) std::cin >> b;
        std::sort(A.begin(), A.end());
        std::sort(B.begin(), B.end());

        std::map<int, int> M;
        for (int i = 0; i < N; i++) M[A[i].second] = B[i];
        for (int i = 0; i < N; i++) std::cout << M[i] << " ";
        std::cout << "\n";
    }
}
