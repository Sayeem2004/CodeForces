#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a < b && a < c && b < d && c < d) cout << "YES\n";
        else if (c < d && c < a && d < b && a < b) cout << "YES\n";
        else if (d < b && d < c && b < a && c < a) cout << "YES\n";
        else if (b < a && b < d && a < c && d < c) cout << "YES\n";
        else cout << "NO\n";
    }
}
