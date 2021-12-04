#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        vector<ll> V1(n), V2(n);
        for (int i = 0; i < n; i++)
            cin >> V1[i];
        for (int i = 0; i < n; i++)
            cin >> V2[i];
        vector<ll> P1(n+1), P2(n+1);
        for (int i = 1; i <= n; i++) {
            P1[i] = P1[i-1] + V1[i-1];
            P2[i] = P2[i-1] + V2[i-1];
        }
        ll ans = 10000000000;
        for (int i = 1; i <= n; i++) {
            ans = min(ans, max(P1[n]-P1[i], P2[i-1]));
        }
        cout << ans << "\n";
    }
}
