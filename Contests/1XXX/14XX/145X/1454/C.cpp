#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;

        int nw = unique(V.begin(), V.end()) - V.begin();
        V.resize(nw);

        map<int, int> M;
        for (int i = 0; i < nw; i++) {
            M[V[i]]++;
        }
        M[V[0]]--; M[V[nw-1]]--;

        int ans = 1e9;
        for (auto [k, v] : M) {
            ans = min(ans, v);
        }
        cout << ans + 1 << "\n";
    }
}
