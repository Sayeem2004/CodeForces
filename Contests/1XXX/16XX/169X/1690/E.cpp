#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, k; cin >> n >> k;
        vector<long long> V(n);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long x; cin >> x;
            ans += x / k;
            V[i] = x % k;
        }
        sort(V.begin(), V.end());
        int i = 0, j = n-1;
        while (i < j) {
            if (V[i] + V[j] >= k) {
                ans++; i++; j--;
            } else i++;
        }
        cout << ans << "\n";
    }
}
