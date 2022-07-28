#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int n = s.size();
        string alp = "abcdefghijklmnopqrstuvwxyz";
        int c = 0, l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                l = i;
                r = i;
                c++;
            }
        }
        if (l == -1 || r == -1) {
            cout << "NO\n";
        } else {
            bool br = true;
            for (int i = 0; i < n-1; i++) {
                if (l > 0 && s[l-1] == alp[c]) {
                    l--;
                    c++;
                } else if (r < n-1 && s[r+1] == alp[c]) {
                    r++;
                    c++;
                } else {
                    br = false; break;
                }
            }
            if (br) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
