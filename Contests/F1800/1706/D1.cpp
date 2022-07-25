#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, k; cin >> n >> k;
        vector<long long> V(n);
        vector<set<long long>> D(n);
        set<long long> P;
        long long mx = -1, pos = -1;
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            for (int q = 1; q <= k; q++) {
                D[i].insert(V[i] / q);
                P.insert(V[i] / q);
            }
            if (V[i] > mx) {
                mx = V[i];
                pos = i;
            }
        }
        long long ans = 1000000000000;
        for (auto itr = P.begin(); itr != P.end(); itr++) {
            long long val = *itr;
            vector<long long> DIF(n);
            for (int i = 0; i < n; i++) {
                auto fnd = D[i].upper_bound(val);
                if (fnd != D[i].begin()) fnd--;
                DIF[i] = *fnd;
            }
            sort(DIF.begin(), DIF.end());
            ans = min(ans, DIF[n-1] - DIF[0]);
        }
        cout << ans << "\n";
    }
}
