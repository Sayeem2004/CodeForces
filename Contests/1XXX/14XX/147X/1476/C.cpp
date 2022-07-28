#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<ll> C(n), A(n), B(n);
        for (int i = 0; i < n; i++)
            cin >> C[i];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];
        vector<ll> DP(n);
        DP[0] = 0;
        ll ans = 0;
        for (int i = 1; i < n; i++) {
            if (A[i] == B[i]) DP[i] = C[i] + 1;
            else DP[i] = C[i] + 1 + max(abs(A[i] - B[i]), DP[i-1] - abs(A[i] - B[i]));
            ans = max(ans, DP[i]);
        }
        cout << ans << "\n";
    }
}
