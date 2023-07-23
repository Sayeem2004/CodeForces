#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N; cin >> N;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;

        long long ans = 0, sm = 0;
        bool neg = false;
        for (long long i = 0; i < N; i++) {
            if (V[i] < 0) {
                ans += !neg;
                neg = true;
            } else if (V[i] > 0) neg = false;

            sm += abs(V[i]);
        }

        cout << sm << ' ' << ans << '\n';
    }
}
