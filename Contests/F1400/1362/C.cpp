#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        ll pw = 1, ans = 0;
        for (int i = 0; i < 62; i++) {
            ans += n/pw;
            pw *= 2;
        }
        cout << ans << "\n";
    }
}
