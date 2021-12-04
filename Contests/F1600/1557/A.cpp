#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define ld long double

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        ll mx = -10000000000, sm = 0;
        for (int i = 0; i < n; i++) {
            ll a; cin >> a;
            mx = max(mx, a);
            sm += a;
        }
        cout << setprecision(9);
        cout << mx + ((ld)sm-mx)/((ld)n-1) << "\n";
    }
}
