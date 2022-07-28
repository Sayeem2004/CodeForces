#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    vector<long long> V(n), S(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
        S[i] = V[i];
    }
    sort(S.begin(), S.end());
    long long ans = (S[0] + 1) / 2 + (S[1] + 1) / 2;
    for (int i = 1; i < n-1; i++) {
        long long mx = max(V[i-1], V[i+1]), mn = min(V[i-1], V[i+1]);
        long long val = (mx - mn + 1) / 2 + mn;
        ans = min(ans, val);
    }
    for (int i = 1; i < n; i++) {
        long long mx = max(V[i], V[i-1]), mn = min(V[i], V[i-1]);
        long long val = min(mx - mn, (mx + 1) / 2);
        val += max((mx - 2 * val + mn - val + 2) / 3, 0LL);
        ans = min(ans, val);
    }
    cout << ans << "\n";
}
