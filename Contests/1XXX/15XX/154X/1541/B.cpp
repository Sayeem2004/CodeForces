#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t; while (t--) {
        ll n; cin >> n;
        vector<ll> V(n+1);
        for (ll i = 1; i <= n; i++)
            cin >> V[i];
        ll ans = 0;
        for (ll i = 1; i < n+1; i++) {
            for (ll q = i-i%V[i]+(V[i]-i%V[i]); q < n+1; q += V[i]) {
                if (i < q && V[i]*V[q] == i+q) ans++;
            }
        }
        cout << ans << "\n";
    }
}
