#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;
        vector<int> V(32);

        for (int i = 0; i < N; i++) {
            int x; cin >> x;

            for (int q = 0; q <= 30; q++) {
                if (x & (1 << q)) V[q]++;
            }
        }

        int ans = 0;
        for (int i = 30; i >= 0; i--) {
            if (V[i] + K >= N) {
                ans += (1 << i);
                K -= (N - V[i]);
            }
        }
        cout << ans << '\n';
    }
}
