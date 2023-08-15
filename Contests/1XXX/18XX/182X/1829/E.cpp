#include <bits/stdc++.h>

long long dfs(int i, int q, int N, int M, std::vector<std::vector<int>>& GRID, std::vector<std::vector<bool>>& VIS) {
    if (i < 0 || i >= N || q < 0 || q >= M || VIS[i][q] || GRID[i][q] == 0) return 0;
    VIS[i][q] = true; long long cnt = GRID[i][q];
    cnt += dfs(i - 1, q, N, M, GRID, VIS);
    cnt += dfs(i + 1, q, N, M, GRID, VIS);
    cnt += dfs(i, q - 1, N, M, GRID, VIS);
    cnt += dfs(i, q + 1, N, M, GRID, VIS);
    return cnt;
}

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, M; std::cin >> N >> M;

        std::vector<std::vector<int>> GRID(N, std::vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int q = 0; q < M; q++) {
                std::cin >> GRID[i][q];
            }
        }

        long long ans = 0;
        std::vector<std::vector<bool>> VIS(N, std::vector<bool>(M));
        for (int i = 0; i < N; i++) {
            for (int q = 0; q < M; q++) {
                if (!VIS[i][q]) ans = std::max(ans, dfs(i, q, N, M, GRID, VIS));
            }
        }

        std::cout << ans << "\n";
    }
}
