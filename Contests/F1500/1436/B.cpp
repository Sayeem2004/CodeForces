#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n%2 == 0) {
            for (int i = 0; i < n; i++) {
                for (int q = 0; q < n; q++) {
                    if (i == q || q+i == n-1)
                        cout << 1 << " ";
                    else
                        cout << 0 << " ";
                }
                cout << "\n";
            }
        } else {
            for (int i = 0; i < n; i++) {
                for (int q = 0; q < n; q++) {
                    if (i == n-1 && q == n/2) {
                        cout << 1 << " ";
                        continue;
                    }
                    if (i == n/2 && q == n-1) {
                        cout << 1 << " ";
                        continue;
                    }
                    if (i == q || q+i == n-1)
                        cout << 1 << " ";
                    else
                        cout << 0 << " ";
                }
                cout << "\n";
            }
        }
    }
}
