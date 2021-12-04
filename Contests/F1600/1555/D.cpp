#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, t; cin >> n >> t;
    string s; cin >> s;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
        V[i] = s[i]-'a';
    vector<vector<int>> PM = {{0,1,2}, {0,2,1}, {1,0,2}, {1,2,0}, {2,0,1}, {2,1,0}};
    vector<vector<int>> P(6, vector<int>(n+1));
    for (int i = 0; i < 6; i++) {
        for (int q = 1; q <= n; q++) {
            P[i][q] = P[i][q-1] + (V[q-1] != PM[i][(q-1)%3]);
        }
    }
    for (int i = 0; i < t; i++) {
        int a, b; cin >> a >> b;
        int ans = 100000000;
        for (int q = 0; q < 6; q++) {
            ans = min(ans, P[q][b]-P[q][a-1]);
        }
        cout << ans << "\n";
    }
}
