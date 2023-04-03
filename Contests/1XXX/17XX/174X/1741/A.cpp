#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        string s, t; cin >> s >> t;
        int ns = 0, nt = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') ns++;
            if (s[i] == 'S') ns = -(ns+1);
            if (s[i] == 'L') ns++;
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == 'X') nt++;
            if (t[i] == 'S') nt = -(nt+1);
            if (t[i] == 'L') nt++;
        }

        if (ns > nt) cout << ">\n";
        else if (ns < nt) cout << "<\n";
        else cout << "=\n";
    }
}
