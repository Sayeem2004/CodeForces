#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<array<int, 2>> V(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i][0] >> V[i][1];
        }
        sort(V.begin(), V.end());
        int ans = abs(V[0][0]) + abs(V[0][1]);
        for (int i = 1; i < n; i++) {
            ans += abs(V[i][0] - V[i-1][0]) + abs(V[i][1] - V[i-1][1]);
        }
        ans += abs(V[n-1][0]) + abs(V[n-1][1]);
        cout << ans << "\n";
    }
}
