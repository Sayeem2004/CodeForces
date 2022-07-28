#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int h, w; cin >> h >> w;
        for (int i = 0; i < h; i++) {
            for (int q = 0; q < w; q++) {
                if (i == 0) {
                    if (q % 2 == 0) cout << 1;
                    else cout << 0;
                } else if (i == h-1) {
                    if (h%2 == 0) {
                        if (q % 2 == 0 && q > 1 && q < w-2) cout << 1;
                        else cout << 0;
                    } else {
                        if (q % 2 == 0) cout << 1;
                        else cout << 0;
                    }
                } else if (i % 2 == 0) {
                    if (q == 0 || q == w-1) cout << 1;
                    else cout << 0;
                } else {
                    cout << 0;
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
