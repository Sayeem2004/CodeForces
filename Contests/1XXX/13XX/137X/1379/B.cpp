#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long l, r, m; cin >> l >> r >> m;
        for (long long i = l; i <= r; i++) {
            if (m >= i && m % i <= r-l) {
                cout << i << " " << l + m % i << " " << l << "\n";
                break;
            } else if ((i - m % i) <= r-l) {
                cout << i << " " << l << " " << l + (i - m % i) << "\n";
                break;
            }
        }
    }
}
