#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int ans = 1;
        for (int i = 0; i < n-2; i++) {
            string curr = s.substr(i, 3);
            if (curr[0] != curr[2]) ans++;
        }

        cout << ans << "\n";
    }
}
