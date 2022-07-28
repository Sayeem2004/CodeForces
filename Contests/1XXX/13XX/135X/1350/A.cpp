#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, k; cin >> n >> k;
        if (n % 2 == 0) cout << n + 2*k << "\n";
        else {
            for (int i = 3; i <= n; i += 2) {
                if (n % i == 0) {
                    cout << n + i + 2*(k-1) << "\n";
                    break;
                }
            }
        }
    }
}
