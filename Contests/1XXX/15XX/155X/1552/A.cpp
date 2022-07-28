#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<char> V(n);
        vector<char> S(n);
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            V[i] = c;
            S[i] = c;
        }
        sort(S.begin(), S.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (S[i] != V[i]) ans++;
        }
        cout << ans << "\n";
    }
}
