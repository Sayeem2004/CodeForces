#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;
        vector<int> V(N), E(N);
        for (int &v : V) cin >> v;
        for (int &e : E) cin >> e;

        int ans = -2, mx = -1;
        for (int i = 0; i < N; i++) {
            if (V[i] + i <= K) {
                if (E[i] > mx) { mx = E[i]; ans = i; }
            }
        }

        cout << ans + 1 << '\n';
    }
}
