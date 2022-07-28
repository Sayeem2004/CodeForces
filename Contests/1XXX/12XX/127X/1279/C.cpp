#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, q; cin >> n >> q;
        map<ll, ll> M;
        for (int i = 0; i < n; i++) {
            ll num; cin >> num;
            M[num] = i;
        }
        ll ans = 0, mx = -1;
        for (int i = 0; i < q; i++) {
            ll num; cin >> num;
            if (M[num] > mx) {
                ans += (M[num]-i)*2+1;
                mx = M[num];
            } else ans++;
        }
        cout << ans << "\n";
    }
}
