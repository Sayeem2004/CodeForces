#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        if (is_sorted(V.begin(), V.end())) cout << 0 << "\n";
        else if (V[n-2] > V[n-1]) cout << -1 << "\n";
        else if (V[n-1] < 0) cout << -1 << "\n";
        else {
            cout << n-2 << "\n";
            for (int i = 0; i < n-2; i++)
                cout << i+1 << " " << n-1 << " " << n << "\n";
        }
    }
}
