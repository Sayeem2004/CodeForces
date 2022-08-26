#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<int> V(m);
        for (int &v : V) cin >> v;
        sort(V.begin(), V.end());
        vector<int> D(m);
        for (int i = 0; i < m; i++) {
            if (i == m-1) D[i] = n+V[0]-V[i]-1;
            else D[i] = V[i+1]-V[i]-1;
        }
        sort(D.rbegin(), D.rend());
        int ans = n, cnt = 0;
        for (int i = 0; i < m; i++) {
            if (D[i]-2*cnt-1 > 0) {
                ans -= D[i]-2*cnt-1;
                cnt += 2;
            } else if (D[i]-2*cnt > 0) {
                ans -= D[i]-2*cnt;
                cnt++;
            }
        }
        cout << ans << "\n";
    }
}
