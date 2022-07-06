#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        if (n % 2 == 1 || n < 4) {
            cout << -1 << "\n";
            continue;
        }
        ll mx = n/4, mn = (n % 6 == 0 ? n/6 : n/6+1);
        cout << mn << " " << mx << "\n";
    }
}
