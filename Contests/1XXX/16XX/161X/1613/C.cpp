#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, h; cin >> n >> h;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        sort(V.begin(), V.end());
        ll l = 0, r = 1000000000000000000;
        while (l < r) {
            ll m = l + (r-l)/2;
            ll sm = 0;
            for (int i = 0; i < n; i++) {
                int start = V[i];
                while (i != n-1 && V[i]+m >= V[i+1]) {
                    i++;
                }
                sm += V[i]+m-start;
            }
            if (sm >= h) r = m;
            else l = m+1;
        }
        cout << l << "\n";
    }
}
