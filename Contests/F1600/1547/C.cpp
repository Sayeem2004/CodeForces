#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int k, n, m; cin >> k >> n >> m;
        vector<int> M(n), P(m);
        for (int i = 0; i < n; i++)
            cin >> M[i];
        for (int i = 0; i < m; i++)
            cin >> P[i];
        int i = 0, q = 0;
        bool br = true;
        vector<int> A;
        while (i < n || q < m) {
            if (i < n && M[i] == 0) {
                A.push_back(M[i]);
                k++; i++;
            } else if (i < n && M[i] <= k) {
                A.push_back(M[i]);
                i++;
            } else if (q < m && P[q] == 0) {
                A.push_back(P[q]);
                k++; q++;
            } else if (q < m && P[q] <= k) {
                A.push_back(P[q]);
                q++;
            } else {
                br = false; break;
            }
        }
        if (!br) {
            cout << -1 << "\n";
        } else {
            for (auto x : A) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
}
