#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        long long ans = 0, sm = 0;
        bool br = false;
        for (int i = 0; i < n-1; i++) {
            if (V[i] == 0 && br) ans++;
            if (V[i] > 0) br = true;
            sm += V[i];
        }
        cout << ans+sm << "\n";
    }
}
