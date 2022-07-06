#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int cnt0 = 0;
        bool dbl = false;
        vector<int> V(n);
        vector<int> A(100000);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            if (V[i] == 0) cnt0++;
            if (A[V[i]] == 1) {
                dbl = true;
            } else {
                A[V[i]]++;
            }
        }
        if (cnt0 > 0) {
            cout << n-cnt0 << "\n";
        } else {
            if (dbl) {
                cout << n << "\n";
            } else {
                cout << n+1 << "\n";
            }
        }
    }
}
