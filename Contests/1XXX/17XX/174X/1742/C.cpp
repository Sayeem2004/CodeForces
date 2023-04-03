#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        vector<string> V(8);
        for (string &s : V) cin >> s;

        bool done = false;

        for (int i = 0; i < 8; i++) {
            bool br = false;
            for (int q = 0; q < 8; q++) {
                if (V[i][q] != 'R') {
                    br = true; break;
                }
            }

            if (!br) {
                cout << "R\n";
                done = true; break;
            }
        }

        if (done) continue;

        for (int i = 0; i < 8; i++) {
            bool br = false;
            for (int q = 0; q < 8; q++) {
                if (V[q][i] != 'B') {
                    br = true; break;
                }
            }

            if (!br) {
                cout << "B\n";
                done = true; break;
            }
        }
    }
}
