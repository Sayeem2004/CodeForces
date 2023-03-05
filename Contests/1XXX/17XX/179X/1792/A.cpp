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

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (V[i] == 1) cnt1++;
            else cnt2++;
        }

        cout << (cnt1 + 1) / 2 + cnt2 << "\n";
    }
}
