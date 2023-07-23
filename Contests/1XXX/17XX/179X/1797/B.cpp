#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;

        vector<vector<int>> G(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
            for (int q = 0; q < N; q++) {
                cin >> G[i][q];
            }
        }

        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int q = 0; q < N; q++) {
                if (G[i][q] != G[N-i-1][N-q-1]) cnt++;
            }
        }
        cnt /= 2;

        bool ok = (N % 2 == 1 ? true : (K - cnt) % 2 == 0);
        if (cnt <= K && ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
