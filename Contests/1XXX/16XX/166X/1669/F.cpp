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

        int sml = 0, l = 0, r = n-1, smr = 0, mx = 0;
        while (l <= r) {
            if (sml < smr) sml += V[l++];
            else if (sml > smr) smr += V[r--];
            else {
                mx = max(mx, l + n - r - 1);
                sml += V[l++];
            }
        }

        if (sml == smr) mx = max(mx, l + n - r - 1);
        cout << mx << "\n";
    }
}
