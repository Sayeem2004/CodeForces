#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        cout << 2 << "\n";
        vector<bool> V(n);
        for (int i = 1; i <= n; i++) {
            if (!V[i-1]) {
                int q = i;
                while (q <= n) {
                    cout << q << " ";
                    V[q-1] = true;
                    q *= 2;
                }
            }
        }
        cout << "\n";
    }
}
