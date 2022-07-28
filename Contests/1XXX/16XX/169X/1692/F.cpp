#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V;
        for (int i = 0; i < n; i++) {
            int a; cin >> a; a %= 10;
            if (count(V.begin(), V.end(), a) < 3)
                V.push_back(a);
        }
        bool fnd = false;
        for (int i = 0; i < V.size(); i++) {
            if (fnd) break;
            for (int q = i+1; q < V.size(); q++) {
                if (fnd) break;
                for (int r = q+1; r < V.size(); r++) {
                    if ((V[i]+V[q]+V[r]) % 10 == 3) {
                        fnd = true; break;
                    }
                }
            }
        }
        if (fnd) cout << "YES\n";
        else cout << "NO\n";
    }
}
