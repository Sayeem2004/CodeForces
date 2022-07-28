#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') cnt++;
        else if (s[i] == ')') cnt--;
        if (cnt < 0) return false;
    }
    return cnt == 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        vector<int> P;
        int cl = s.size() / 2, cr = s.size() / 2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') cl--;
            else if (s[i] == ')') cr--;
            else P.push_back(i);
        }
        for (int i = 0; i < P.size(); i++) {
            if (i < cl) s[P[i]] = '(';
            else s[P[i]] = ')';
        }
        string gs = s;
        if (cl-1 >= 0 && cl < P.size()) swap(gs[P[cl-1]], gs[P[cl]]);
        if (check(s) && check(gs) && s != gs) cout << "NO\n";
        else cout << "YES\n";
    }
}
