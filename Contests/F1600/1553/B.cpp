#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string a, b; cin >> a >> b;
        bool br = false;
        for (int i = 0; i < a.size(); i++) {
            for (int q = i; q < a.size(); q++) {
                for (int r = 0; r <= q; r++) {
                    if ((q-i+1 + q-r) != b.size()) continue;
                    string temp = "";
                    for (int s = i; s <= q; s++) temp += a[s];
                    for (int s = q-1; s >= r; s--) temp += a[s];
                    if (temp == b) {
                        br = true; break;
                    }
                }
            }
        }
        if (br) cout << "YES\n";
        else cout << "NO\n";
    }
}
