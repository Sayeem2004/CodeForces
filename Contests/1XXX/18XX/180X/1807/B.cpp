#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int n; cin >> n;
        int se = 0, so = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x % 2 == 0) se += x;
            else so += x;
        }

        if (se > so) cout << "YES\n";
        else cout << "NO\n";
    }
}
