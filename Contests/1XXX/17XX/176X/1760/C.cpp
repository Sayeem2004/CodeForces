#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n), S(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            S[i] = V[i];
        }

        sort(S.begin(), S.end());
        for (int i = 0; i < n; i++) {
            if (V[i] == S[n-1]) cout << V[i] - S[n-2] << " ";
            else cout << V[i] - S[n-1] << " ";
        }
        cout << "\n";
    }
}
