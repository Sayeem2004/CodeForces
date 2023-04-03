#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;

        sort(V.begin(), V.end());
        bool br = false;
        for (int i = 1; i < n; i++) {
            if (V[i] == V[i - 1]) {
                br = true; break;
            }
        }

        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
