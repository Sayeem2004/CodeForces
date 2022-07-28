#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        if (n < 2050) {
            cout << -1 << "\n";
            continue;
        }
        ll curr = 2050, ans = 0;
        while (curr*10 <= n)
            curr *= 10;
        bool br = false;
        while (n > 0) {
            if (n < 2050) {br = true; break;}
            ans += n/curr;
            n = n%curr;
            curr /= 10;
        }
        if (br) cout << -1 << "\n";
        else cout << ans << "\n";
    }
}
