#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int prev = -1, cr = 0, cb = 0;
        bool br = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') cr++;
            else if (s[i] == 'B') cb++;
            else {
                if ((cr > 0 && cb == 0) || (cr == 0 && cb > 0)) {
                    br = true; break;
                }
                prev = i; cr = 0; cb = 0;
            }
        }

        if ((cr > 0 && cb == 0) || (cr == 0 && cb > 0)) br = true;
        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
