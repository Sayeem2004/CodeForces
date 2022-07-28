#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, m; cin >> n >> m;
        vector<vector<ll>> v(n,vector<ll>(m));
        for (int i = 0; i < n; i++)
            for (int q = 0; q < m; q++)
                cin >> v[i][q];
        vector<vector<ll>> v2(n,vector<ll>(m));
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                vector<ll> temp;
                temp.push_back(v[i][q]);
                temp.push_back(v[i][m-q-1]);
                temp.push_back(v[n-i-1][q]);
                temp.push_back(v[n-i-1][m-q-1]);
                sort(temp.begin(),temp.end());
                v2[i][q] = temp[1];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                ans += abs(v[i][q]-v2[i][q]);
            }
        }
        cout << ans << "\n";
    }
}
