#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, a, b; cin >> n >> a >> b;
        if (a == 1) {
            if ((n-1)%b == 0) cout << "Yes\n";
            else cout << "No\n";
            continue;
        }
        if (b == 1) {
            cout << "Yes\n";
            continue;
        }
        bool br = true;
        for (ll i = 1; i <= n; i *= a) {
            if ((n-i)%b == 0) {
                cout << "Yes\n";
                br = false; break;
            }
        }
        if (br) cout << "No\n";
    }
}
