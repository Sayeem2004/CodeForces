#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        bool br = false;
        for (int i = 1; i < m; i++) {
            if (a[n-m+i] != b[i]) {
                br = true; break;
            }
        }
        if (br) cout << "NO\n";
        else {
            bool fnd = false;
            for (int i = 0; i < n-m+1; i++) {
                if (a[i] == b[0]) {
                    fnd = true; break;
                }
            }
            if (fnd) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
