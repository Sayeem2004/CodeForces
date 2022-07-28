#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
int mod = 1000000007;

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        ll ans = 0;
        for (ll i = 1, q = 1; i <= n; i = lcm(i, q), q++) {
            ans += n / i;
            ans %= mod;
        }
        cout << ans << "\n";
    }
}
