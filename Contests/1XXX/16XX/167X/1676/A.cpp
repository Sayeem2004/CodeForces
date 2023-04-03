#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int sm1 = 0, sm2 = 0;

        sm1 += (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        sm2 += (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

        if (sm1 == sm2) cout << "YES\n";
        else cout << "NO\n";
    }
}
