#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n % 2 == 1) {
            cout << n << " ";
            for (int i = 0; i < n-1; i++) {
                cout << i+1 << " ";
            }
            cout << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) cout << i+2 << " ";
                else cout << i << " ";
            }
            cout << "\n";
        }
    }
}
