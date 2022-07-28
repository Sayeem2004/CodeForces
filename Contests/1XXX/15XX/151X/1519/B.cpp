#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int x, y, k; cin >> x >> y >> k;
        if (1*(y-1) + y*(x-1) == k) cout << "YES\n";
        else cout << "NO\n";
    }
}
