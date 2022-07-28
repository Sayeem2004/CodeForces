#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                if (i % 4 == 0 || i % 4 == 3) {
                    if (q % 4 == 1 || q % 4 == 2) cout << 0 << " ";
                    else cout << 1 << " ";
                } else {
                    if (q % 4 == 1 || q % 4 == 2) cout << 1 << " ";
                    else cout << 0 << " ";
                }
            }
            cout << "\n";
        }
    }
}
