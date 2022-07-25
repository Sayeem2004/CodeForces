#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);;
    long long t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V;
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            long long x; cin >> x;
            if (x < i+1) {
                ans += distance(V.begin(), lower_bound(V.begin(), V.end(), x));
                V.push_back(i+1);
            }
        }
        cout << ans << "\n";
    }
}
