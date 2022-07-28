#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    vector<long long> V(n);
    for (long long &v : V) cin >> v;
    vector<long long> P(n), S(n);
    P[0] = V[0], S[n-1] = V[n-1];
    for (int i = 1; i < n; i++) P[i] = __gcd(P[i-1], V[i]);
    for (int i = n-2; i >= 0; i--) S[i] = __gcd(S[i+1], V[i]);
    long long ans = S[1];
    for (int i = 1; i < n; i++) {
        if (i == n-1) ans = ans * P[n-2] / __gcd(ans, P[n-2]);
        else ans = ans * __gcd(P[i-1], S[i+1]) / __gcd(ans, __gcd(P[i-1], S[i+1]));
    }
    cout << ans << "\n";
}
