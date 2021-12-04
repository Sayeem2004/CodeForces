#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define mod 1000000007

// Binary Exponentiation
ll modpow(ll x, ll n, ll m) {
    if (n == 0) return 1 % m;
    ll u = modpow(x, n/2, m);
    u = (u * u) % m;
    if (n % 2 == 1) u = (u * x) % m;
    return u;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, k; cin >> n >> k;
        if (k == 0) {
            cout << 1 << "\n";
            continue;
        }
        ll w = modpow(2, n-1, mod);
        vector<vector<ll>> DP(k+1, vector<ll>(2));
        DP[0][0] = 1;
        for (int i = 1; i <= k; i++) {
            DP[i][1] = (DP[i-1][1]*2*w)%mod;
            DP[i][0] = (DP[i-1][0]*(w-(n%2==0)))%mod;
            DP[i][n%2!=1] += DP[i-1][0];
            DP[i][n%2!=1] %= mod;
        }
        cout << (DP[k][0]+DP[k][1])%mod << "\n";
    }
}
