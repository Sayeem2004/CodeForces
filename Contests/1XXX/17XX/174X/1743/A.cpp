#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        cout << 3 * (10-n) * (9-n) << "\n";
    }
}
