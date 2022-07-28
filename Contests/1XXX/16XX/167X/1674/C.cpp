#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s1, s2; cin >> s1 >> s2;
        if (s2 == "a") {
            cout << 1 << "\n";
        } else {
            bool br = false;
            for (int i = 0; i < s2.size(); i++) {
                if (s2[i] == 'a') {
                    br = true; break;
                }
            }
            if (br) {
                cout << -1 << "\n";
            } else {
                ll ans = 1;
                for (int i = 0; i < s1.size(); i++) {
                    ans *= 2;
                }
                cout << ans << "\n";
            }
        }
    }
}
