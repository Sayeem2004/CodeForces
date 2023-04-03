#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int n; cin >> n;
    vector<int> B(n);
    for (int &b : B) cin >> b;

    int m; cin >> m;
    vector<int> G(m);
    for (int &g : G) cin >> g;

    sort(B.begin(), B.end());
    sort(G.begin(), G.end());

    int b = 0, g = 0, ans = 0;
    while (b < n && g < m) {
        if (abs(B[b] - G[g]) <= 1) { ans++; b++; g++; }
        else if (B[b] < G[g]) b++;
        else g++;
    }

    cout << ans << "\n";
}
