#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m, i, j; cin >> n >> m >> i >> j;
        if (n == 1 && m == 1) {
            cout << 1 << " " << 1 << " " << 1 << " " << 1 << "\n";
        } else if (n == 1) {
            cout << 1 << " " << 1 << " " << 1 << " " << m << "\n";
        } else if (m == 1) {
            cout << 1 << " " << 1 << " " << n << " " << 1 << "\n";
        } else {
            cout << 1 << " " << 1 << " " << n << " " << m << "\n";
        }
    }
}
