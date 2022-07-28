#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        ll mx = 0, mxp = -1, mn = 1000000000, mnp = -1;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a > mx) {
                mx = a;
                mxp = i;
            }
            if (a < mn) {
                mn = a;
                mnp = i;
            }
        }
        cout << min(min(max(mxp, mnp)+1, n-min(mxp, mnp)), min(mnp+1+n-mxp, mxp+1+n-mnp)) << "\n";
    }
}
