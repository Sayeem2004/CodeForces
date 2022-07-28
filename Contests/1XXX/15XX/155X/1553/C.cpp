#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int s1 = 0, s2 = 0, m1 = 0, m2 = 0;
        bool br = true;
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                if (s[i] == '1') s1++;
                else if (s[i] == '?') m1++;
            } else {
                if (s[i] == '1') s2++;
                else if (s[i] == '?') m2++;
            }
            if (s1 + m1 > s2 + (10-i)/2) {
                cout << i+1 << "\n";
                br = false; break;
            }
            if (s2 + m2 > s1 + (9-i)/2) {
                cout << i+1 << "\n";
                br = false; break;
            }
        }
        if (br) cout << 10 << "\n";
    }

}
