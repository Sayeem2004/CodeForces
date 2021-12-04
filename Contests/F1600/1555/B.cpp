#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int w, h; cin >> w >> h;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int w2, h2; cin >> w2 >> h2;
        if (w-abs(x2-x1) < w2 && h-abs(y2-y1) < h2) {
            cout << -1 << "\n";
        } else {
            int mn = 1000000000;
            if (w-abs(x2-x1) >= w2) {
                mn = min(mn, max(w2-x1, 0));
                mn = min(mn, max(w2-(w-x2), 0));
            }
            if (h-abs(y2-y1) >= h2) {
                mn = min(mn, max(h2-y1, 0));
                mn = min(mn, max(h2-(h-y2), 0));
            }
            cout << mn << "\n";
        }
    }
}
