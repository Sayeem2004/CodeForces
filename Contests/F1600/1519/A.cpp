#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll r, b, d; cin >> r >> b >> d;
        if (max(r,b) <= (min(r,b)*(d+1))) cout << "YES\n";
        else cout << "NO\n";
    }
}
