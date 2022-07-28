#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t; while (t--) {
        ll n; cin >> n;
        vector<ll> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        sort(V.begin(),V.end());
        if (n <= 2) {
            cout << 0 << "\n";
            continue;
        }
        vector<ll> P(n);
        P[0] = V[0];
        for (ll i = 1; i < n; i++) {
            P[i] = P[i-1]+V[i];
        }
        ll ans = 0;
        for (ll i = 2; i < n; i++) {
            ans -= V[i]*(i-1) - P[i-2];
        }
        cout << ans << "\n";
    }
}
