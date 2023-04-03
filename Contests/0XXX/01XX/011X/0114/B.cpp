#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int n, m; cin >> n >> m;
    vector<string> V(n);
    for (string &s : V) cin >> s;

    set<pair<string, string>> S;
    for (int i = 0; i < m; i++) {
        string a, b; cin >> a >> b;
        S.insert({a, b});
    }

    int pos = 1, mx = 1;
    for (int i = 0; i < 1 << n; i++) {
        bool ok = true;

        for (int q = 0; q < n; q++) {
            for (int r = q+1; r < n; r++) {
                if ((i & (1 << q)) && (i & (1 << r))) {
                    if (S.count({V[q], V[r]}) || S.count({V[r], V[q]})) ok = false;
                }
            }
        }

        if (ok) {
            int cnt = __builtin_popcount(i);
            if (cnt > mx) { mx = cnt; pos = i; }
        }
    }

    vector<string> A(mx);
    for (int i = 0, q = 0; i < n; i++) {
        if (pos & (1 << i)) A[q++] = V[i];
    }
    sort(A.begin(), A.end());

    cout << mx << "\n";
    for (string &s : A) cout << s << "\n";
}
