#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        sort(V.begin(), V.end());
        if (n == 1) {
            if (V[0] >= 2) cout << "NO\n";
            else cout << "YES\n";
        } else {
            if (V[n-1] >= V[n-2]+2) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}
