#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            if (i == 0) res += char(s[i]-1);
            else if (i > 0) res += s[i];
        }
        cout << (res == "" ? 0 : stoi(res)) << "\n";
    }
}
