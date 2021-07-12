#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int x1, y1; cin >> x1 >> y1;
        int x2, y2; cin >> x2 >> y2;
        int x3, y3; cin >> x3 >> y3;
        if (x1 == x2) {
            if (x1 == x3 && y3 < max(y1, y2) && y3 > min(y1, y2)) cout << abs(y2-y1)+2 << "\n";
            else cout << abs(y2-y1) << "\n";
        } else if (y1 == y2) {
            if (y1 == y3 && x3 < max(x1, x2) && x3 > min(x1, x2)) cout << abs(x2-x1)+2 << "\n";
            else cout << abs(x2-x1) << "\n";
        } else {
            cout << abs(x2-x1) + abs(y2-y1) << "\n";
        }
    }
}
