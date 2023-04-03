#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<int> V(n);
        for (int &v : V) cin >> v;

        map<int, int> M;
        for (int v : V) M[v]++;

        vector<int> F;
        for (auto [k, v] : M) {
            if (v >= m) F.push_back(k);
        }

        int ans = -1, l = -1, r = -1;
        for (int i = 0; i < F.size(); i++) {
            int q = i+1;
            while (q < F.size() && F[q] == F[q-1] + 1) q++;
            q--;

            if (q - i + 1 >= ans) {
                ans = q - i + 1;
                l = F[i]; r = F[q];
                i = q;
            }
        }

        if (ans == -1) cout << -1 << "\n";
        else cout << l << " " << r << "\n";
    }
}
