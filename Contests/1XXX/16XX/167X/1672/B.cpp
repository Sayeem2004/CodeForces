#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int cntA = 0, cntB = 0;
        bool br = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') cntA++;
            else cntB++;
            if (cntB > cntA) {
                br = true; break;
            }
        }
        if (br || cntB > cntA || s[s.size()-1] == 'A') cout << "NO\n";
        else cout << "YES\n";
    }
}
