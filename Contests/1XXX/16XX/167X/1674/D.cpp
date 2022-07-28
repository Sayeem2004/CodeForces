#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

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
        if (n % 2 == 0) {
            bool br = false;
            for (int i = 0; i < n; i += 2) {
                int a1 = V[i], a2 = V[i+1];
                int b1 = S[i], b2 = S[i+1];
                if (min(a1, a2) != min(b1, b2) || max(a1, a2) != max(b1, b2)) {
                    br = true; break;
                }
            }
            if (br) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        } else {
            bool br = false;
            for (int i = 1; i < n; i += 2) {
                int a1 = V[i], a2 = V[i+1];
                int b1 = S[i], b2 = S[i+1];
                if (min(a1, a2) != min(b1, b2) || max(a1, a2) != max(b1, b2)) {
                    br = true; break;
                }
            }
            if (br) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
}
