#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        map<long long, long long> T;
        for (int i = 0; i < m; i++) {
            long long a; cin >> a;
            T[a-1]++;
        }
        long long l = 0, r = 1000000000;
        while (l < r) {
            long long m = (l+r) >> 1;
            long long carry = 0, need = 0;
            for (int i = 0; i < n; i++) {
                if (T[i] > m) need += T[i]-m;
                else carry += (m-T[i])/2;
            }
            if (carry >= need) r = m;
            else l = m+1;
        }
        cout << l << "\n";
    }
}
