#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(3);
        for (int &v : V) cin >> v;
        if (V[n-1] == 0 || V[V[n-1]-1] == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}
