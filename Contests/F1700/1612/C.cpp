#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll k, x; cin >> k >> x;
        ll l = 1, r = 2*k-1, ans = r;
        while (l <= r) {
            ll m = l + (r-l)/2;
            ll sm = (m > k ? k*k - (2*k-m-1)*(2*k-m)/2 : m*(m+1)/2);
            if (sm >= x) {
                r = m-1;
                ans = m;
            } else l = m+1;
        }
        cout << ans << "\n";
    }
}
