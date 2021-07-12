#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll a, b; cin >> a >> b;
        if (a == b) {
            cout << 0 << " " << 0 << "\n";
        } else {
            cout << abs(a-b) << " " << min(abs(a-b)-a%abs(a-b), a%abs(a-b)) << "\n";
        }
    }
}
