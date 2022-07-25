#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        vector<int> V(2*n);
        for (int &x : V) cin >> x;
        sort(V.begin(), V.end());
        bool br = false;
        for (int i = 0; i < n; i++) {
            if (V[i]+k > V[i+n]) {
                br = true; break;
            }
        }
        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
