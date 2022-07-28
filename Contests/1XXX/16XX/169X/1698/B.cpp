#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        vector<int> V(n);
        for (int i = 0; i < n; i++) cin >> V[i];
        if (k == 1) {
            cout << (n-1)/2 << "\n";
        } else {
            int ans = 0;
            for (int i = 1; i < n-1; i++) {
                if (V[i] > V[i-1]+V[i+1]) ans++;
            }
            cout << ans << "\n";
        }
    }
}
