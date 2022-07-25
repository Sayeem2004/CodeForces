#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        int ans = 0;
        for (int i = 1; i < n-1; i++) {
            if (V[i] > V[i-1] && V[i] > V[i+1]) {
                V[i+1] = max(V[i], (i < n-2 ? V[i+2] : 0));
                ans++;
            }
        }
        cout << ans << "\n";
        for (int i = 0; i < n; i++)
            cout << V[i] << " \n"[i == n-1];
    }
}
