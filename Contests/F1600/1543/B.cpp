#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        ll sm = 0;
        for (int i = 0; i < n; i++) {
            ll a; cin >> a;
            sm += a;
        }
        cout << (n-sm%n)*(sm%n) << "\n";
    }
}
