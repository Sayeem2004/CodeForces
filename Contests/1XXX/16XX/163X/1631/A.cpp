#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> F(n), S(n);
        for (int &x : F) cin >> x;
        for (int &x : S) cin >> x;
        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i++) {
            if (F[i] > S[i]) swap(F[i], S[i]);
            mx1 = max(mx1, F[i]);
            mx2 = max(mx2, S[i]);
        }
        cout << mx1 * mx2 << "\n";
    }
}
