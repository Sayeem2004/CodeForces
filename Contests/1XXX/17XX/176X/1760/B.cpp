#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, s[i] - 'a');
        }

        cout << ans+1 << "\n";
    }
}
