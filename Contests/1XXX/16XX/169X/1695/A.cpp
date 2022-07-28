#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        long long mx = -1000000000000, x = -1, y = -1;
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                long long a; cin >> a;
                if (a > mx) {
                    mx = a; x = i, y = q;
                }
            }
        }
        cout << max({(x+1)*(y+1), (n-x)*(y+1), (x+1)*(m-y), (n-x)*(m-y)}) << "\n";
    }
}
