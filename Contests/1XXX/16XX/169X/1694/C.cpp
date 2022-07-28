#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        bool zero = false, br = false;
        long long sm = 0;
        for (int i = 0; i < n; i++) {
            sm += V[i];
            if (sm < 0) { br = true; break; }
            else if (sm > 0 && zero) { br = true; break; }
            else if (sm == 0) { zero = true; }
        }
        if (br || !zero) cout << "NO\n";
        else cout << "YES\n";
    }
}
