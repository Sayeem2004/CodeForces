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

        vector<int> D(N);
        for (int i = 0; i < N; i++) D[i] = abs(V[i] - i - 1);

        int ans = D[0];
        for (int i = 1; i < N; i++) ans = __gcd(ans, D[i]);

        cout << ans << '\n';
    }
}
