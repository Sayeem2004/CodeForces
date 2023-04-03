#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<int> V(N);
        for (int &v : V) cin >> v;

        int xr = V[0];
        for (int i = 1; i < N; i++) xr ^= V[i];

        if (N % 2 == 0) {
            if (xr == 0) cout << 0 << "\n";
            else cout << -1 << "\n";
        } else cout << xr << "\n";
    }
}
