#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n), S(n);

        for (int i = 0; i < n; i++) {
            cin >> V[i]; S[i] = V[i];
        }
        sort(S.begin(), S.end());

        long long ans = 0;
        vector<int> P;
        for (int i = 0; i < n; i++) {
            int pos1 = upper_bound(S.begin(), S.end(), V[i]) - S.begin() - 1;
            int pos2 = upper_bound(P.begin(), P.end(), V[i]) - P.begin();
            ans += max(0, pos1 - pos2);
            P.insert(upper_bound(P.begin(), P.end(), V[i]), V[i]);
        }

        cout << ans << "\n";
    }
}
