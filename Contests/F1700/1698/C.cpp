#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<ll> V;
        int cn = 0, cp = 0, cz = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a < 0) {
                if (cn < 3) V.push_back(a);
                cn++;
            } else if (a > 0) {
                if (cp < 3) V.push_back(a);
                cp++;
            } else {
                if (cz < 3) V.push_back(a);
                cz++;
            }
        }
        if (cn >= 3 || cp >= 3) {
            cout << "NO\n";
            continue;
        }
        bool br = true;
        for (int i = 0; i < V.size(); i++) {
            for (int q = i+1; q < V.size(); q++) {
                for (int r = q+1; r < V.size(); r++) {
                    if (!count(V.begin(), V.end(), V[i]+V[q]+V[r])) {
                        br = false;
                        break;
                    }
                }
            }
        }
        if (br) cout << "YES\n";
        else cout << "NO\n";
    }
}
