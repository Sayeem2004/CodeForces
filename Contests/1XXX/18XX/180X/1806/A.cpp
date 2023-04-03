#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int A, B, C, D; cin >> A >> B >> C >> D;

        if (B > D) cout << -1 << "\n";
        else {
            A += D-B;
            if (A < C) cout << -1 << "\n";
            else cout << D-B + A-C << "\n";
        }
    }
}
