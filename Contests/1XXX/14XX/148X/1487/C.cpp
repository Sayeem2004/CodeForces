#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n == 2) cout << 0 << "\n";
        else {
            int wn = n*(n-1)/2/n;
            for (int i = 0; i < n; i++) {
                for (int q = i+1; q < n; q++) {
                    if (q <= i+wn) cout << 1 << " ";
                    else if (q >= n - max(0, wn-i)) cout << -1 << " ";
                    else cout << 0 << " ";
                }
            }
            cout << "\n";
        }
    }
}
