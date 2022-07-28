#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &x : V) cin >> x;
        bool br = false;
        int prev = V[0];
        for (int i = 1; i < n; i++) {
            if (V[i] % prev != 0) {
                br = true; break;
            } else {
                prev = (V[i] % prev == 0 ? prev : V[i] % prev);
            }
        }
        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
