#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        string res = "";

        for (int i = 1; i < 1000; i++) {
            if (i % 3 == 0) res += 'F';
            if (i % 5 == 0) res += 'B';
        }

        if (res.find(s) != string::npos) cout << "YES\n";
        else cout << "NO\n";
    }
}
