#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        set<int> S;
        int br = false, ans = -1;
        for (int i = n-1; i >= 0; i--) {
            if (S.find(V[i]) != S.end()) {
                br = true; ans = i; break;
            }
            S.insert(V[i]);
        }
        if (br) cout << ans+1 << "\n";
        else cout << 0 << "\n";
    }
}
