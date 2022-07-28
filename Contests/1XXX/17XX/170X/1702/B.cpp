#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int ans = 1;
        set<char> S;
        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && S.find(s[i]) == S.end() && S.size() == 3) {
                ans++;
                S.clear();
            }
            S.insert(s[i]);
        }
        cout << ans << "\n";
    }
}
