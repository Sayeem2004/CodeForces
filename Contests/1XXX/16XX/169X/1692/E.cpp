#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, s, sm = 0; cin >> n >> s;
        vector<int> V(n);
        for (int &v : V) { cin >> v; sm += v; }
        vector<int> P(n), S(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) P[i] = (V[i] == 1);
            else P[i] = P[i-1] + (V[i] == 1);
        }
        for (int i = n-1; i >= 0; i--) {
            if (i == n-1) S[i] = (V[i] == 1);
            else S[i] = S[i+1] + (V[i] == 1);
        }
        if (sm < s) cout << -1 << "\n";
        else if (sm == s) cout << 0 << "\n";
        else {
            int ans = 1000000000, dif = sm-s;
            for (int i = 0; i <= dif; i++) {
                if (i == 0) {
                    int dist = abs(distance(lower_bound(S.rbegin(), S.rend(), dif), S.rbegin()));
                    ans = min(ans, dist+1);
                } else if (i == dif) {
                    int dist = abs(distance(lower_bound(P.begin(), P.end(), dif), P.begin()));
                    ans = min(ans, dist+1);
                } else {
                    int dist1 = abs(distance(lower_bound(S.rbegin(), S.rend(), dif-i), S.rbegin()));
                    int dist2 = abs(distance(lower_bound(P.begin(), P.end(), i), P.begin()));
                    ans = min(ans, min(dist1+dist2+2, n));
                }
            }
            cout << ans << "\n";
        }
    }
}
