#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n % 2 == 0) {
            for (int i = n-2; i > 0; i--) cout << i << " ";
            cout << n-1 << " " << n << "\n";
        } else {
            cout << 1 << " ";
            for (int i = n-2; i > 1; i--) cout << i << " ";
            cout << n-1 << " " << n << "\n";
        }
    }
}
