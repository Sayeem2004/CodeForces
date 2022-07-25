#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int a, b, c; cin >> a >> b >> c;
        int mn = min({a, b, c}), mx = max({a, b, c}), md = a+b+c-mn-mx;
        if (mn == md && md == mx) cout << 0 << "\n";
        else if (mn == md) cout << 2*max(mx-md-2, 0) << "\n";
        else if (md == mx) cout << 2*max(md-mn-2, 0) << "\n";
        else {
            mn++; mx--;
            cout << abs(mx-md) + abs(md-mn) + abs(mx-mn) << "\n";
        }
    }
}
