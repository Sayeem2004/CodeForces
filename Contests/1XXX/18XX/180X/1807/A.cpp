#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b == c) cout << "+\n";
        else cout << "-\n";
    }
}
