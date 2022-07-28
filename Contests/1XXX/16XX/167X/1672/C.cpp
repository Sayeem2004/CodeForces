#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        int l = 1000000000, r = 0;
        for (int i = 0; i < n-1; i++) {
            if (V[i] == V[i+1]) {
                l = min(l, i);
                r = max(r, i+1);
            }
        }
        if (l > r) cout << 0 << "\n";
        else if (r-l <= 2) cout << max(0, r-l-1) << "\n";
        else cout << max(0, r-l-2) << "\n";
    }
}
