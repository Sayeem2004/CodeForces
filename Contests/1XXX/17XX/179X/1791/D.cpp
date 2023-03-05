#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        vector<vector<int>> V(n, vector<int>(26, 0));
        V[0][s[0]-'a'] = 1;
        for (int i = 1; i < n; i++) {
            V[i] = V[i-1];
            V[i][s[i]-'a']++;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int cntA = 0, cntB = 0;
            for (int j = 0; j < 26; j++) {
                if (V[i][j] > 0) cntA++;
                if (V[n-1][j] - V[i][j] > 0) cntB++;
            }
            ans = max(ans, cntA + cntB);
        }

        cout << ans << "\n";
    }
}
