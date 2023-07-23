#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int X, Y; cin >> X >> Y;

        if (X == 1) {
            cout << "1\n";
            cout << X << " " << Y << "\n";
        } else if (Y == 1) {
            cout << "1\n";
            cout << X << " " << Y << "\n";
        } else {
            cout << "2\n";
            cout << X - 1 << " " << 1 << "\n";
            cout << X << " " << Y << "\n";
        }
    }
}
