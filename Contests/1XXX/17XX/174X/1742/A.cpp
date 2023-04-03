#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b + c == 2 * c) cout << "YES\n";
        else if (a + b + c == 2 * b) cout << "YES\n";
        else if (a + b + c == 2 * a) cout << "YES\n";
        else cout << "NO\n";
    }
}
