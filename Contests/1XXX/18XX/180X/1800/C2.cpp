#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;

        long long ans = 0;
        multiset<long long> POW;
        for (int i = 0; i < n; i++) {
            if (V[i] == 0) {
                if (!POW.empty()) {
                    ans += *POW.rbegin();
                    POW.erase(POW.find(*POW.rbegin()));
                }
            } else {
                POW.insert(V[i]);
            }
        }

        cout << ans << '\n';
    }
}
