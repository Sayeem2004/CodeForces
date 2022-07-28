#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, k; cin >> n >> k;
        long long ans = 0, curr = 1;
        while (curr <= k && curr < n) {
            curr *= 2; ans++;
        }
        cout << ans+(n - curr + k - 1) / k << "\n";
    }
}
