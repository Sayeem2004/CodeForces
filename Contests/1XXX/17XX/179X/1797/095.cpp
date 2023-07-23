#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, M; cin >> N >> M;

        cout << "? 1 1" << endl;
        int d1; cin >> d1;

        int d2 = -1, d3 = -1;
        bool ok = false;
        if (d1 < N) {
            cout << "? " << d1+1 << " 1" << endl;
            cin >> d2;
        }
        if (d1 < M) {
            cout << "? 1 " << d1+1 << endl;
            cin >> d3;
        }

        if (d2 != -1 && d3 != -1) {
            if (d2 < d3) cout << "! " << d1+1 << " " << d2+1 << endl;
            else cout << "! " << d3+1 << " " << d1+1 << endl;
        } else if (d2 != -1) cout << "! " << d1+1 << " " << d2+1 << endl;
        else if (d3 != -1) cout << "! " << d3+1 << " " << d1+1 << endl;
        else cout << "! " << d1+1 << " " << d1+1 << endl;
    }
}
