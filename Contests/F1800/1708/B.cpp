#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, l, r; cin >> n >> l >> r;
        vector<long long> V(n+1);
        bool br = false;
        for (int i = 1; i <= n; i++) {
            if (r - r % i < l) {
                br = true; break;
            }
            V[i] = r - r % i;
        }
        if (br) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
                cout << V[i] << " \n"[i == n];
        }
    }
}
