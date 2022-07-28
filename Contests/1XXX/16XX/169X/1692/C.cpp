#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n = 8;
        vector<string> B(n);
        for (int i = 0; i < n; i++)
            cin >> B[i];
        for (int i = 1; i < n-1; i++) {
            for (int q = 1; q < n-1; q++) {
                if (B[i+1][q+1] == '#' && B[i-1][q+1] == '#' && B[i+1][q-1] == '#' && B[i-1][q-1] == '#') {
                    cout << i+1 << " " << q+1 << "\n";
                }
            }
        }
    }
}
