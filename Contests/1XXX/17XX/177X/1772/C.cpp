#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int k, n; cin >> k >> n;

        vector<int> V(k);
        int curr = 1, pos = 0;

        while (pos < k) {
            if (curr + pos + (k - pos - 1) > n) curr++;
            else curr += pos;
            V[pos] = curr; pos++;
        }

        for (int v : V) cout << v << " ";
        cout << "\n";
    }
}
