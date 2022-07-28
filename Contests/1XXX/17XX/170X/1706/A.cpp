#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<char> V(m, 'B');
        for (int i = 0; i < n; i++) {
            int a; cin >> a; a--;
            int mn = min(a, m-a-1), mx = max(a, m-a-1);
            if (V[mn] != 'A') V[mn] = 'A';
            else V[mx] = 'A';
        }
        for (char v : V) cout << v;
        cout << "\n";
    }
}
