#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int x, y; cin >> x >> y;
        if (y % x != 0) {
            cout << 0 << " " << 0 << "\n";
        } else if (y == x) {
            cout << 1 << " " << 1 << "\n";
        } else {
            bool br = false;
            for (int b = 2; b <= 100; b++) {
                int a = 0, cpy = x;
                while (cpy < y) {
                    cpy *= b;
                    a++;
                }
                if (cpy == y) {
                    cout << a << " " << b << "\n";
                    br = true; break;
                }
            }
            if (!br) {
                cout << 0 << " " << 0 << "\n";
            }
        }
    }
}
