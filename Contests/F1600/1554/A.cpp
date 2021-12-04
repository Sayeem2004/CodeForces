#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        vector<ll> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        ll mx = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                mx = max(mx, V[i]*V[i+1]);
            } else if (i == n-1) {
                mx = max(mx, V[i]*V[i-1]);
            } else {
                mx = max(mx, max(V[i]*V[i-1], V[i]*V[i+1]));
            }
        }
        cout << mx << "\n";
    }
}
