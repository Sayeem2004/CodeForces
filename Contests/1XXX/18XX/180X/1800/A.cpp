#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int curr = 0;
        bool br = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'm' || s[i] == 'M') {
                if (curr < 0 || curr > 1) { br = true; break; }
                curr = 1; continue;
            }

            if (s[i] == 'e' || s[i] == 'E') {
                if (curr < 1 || curr > 2) { br = true; break; }
                curr = 2; continue;
            }

            if (s[i] == 'o' || s[i] == 'O') {
                if (curr < 2 || curr > 3) { br = true; break; }
                curr = 3; continue;
            }

            if (s[i] == 'w' || s[i] == 'W') {
                if (curr < 3 || curr > 4) { br = true; break; }
                curr = 4; continue;
            }

            br = true; break;
        }

        if (br || curr != 4) cout << "NO\n";
        else cout << "YES\n";
    }
}
