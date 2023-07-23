#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int R, C; cin >> R >> C;
        int mn = min(abs(R), abs(C)), mx = max(abs(R), abs(C));

        cout << mn * 2 + (mx - mn) * 2 - (mx - mn != 0) << '\n';
    }
}
