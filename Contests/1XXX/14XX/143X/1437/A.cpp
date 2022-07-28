#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int l, r; cin >> l >> r;
        if (l*2 < r+1) cout << "NO\n";
        else cout << "YES\n";
    }
}
