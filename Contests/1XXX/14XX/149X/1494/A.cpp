#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

bool check(string t) {
    int curr = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '(') curr++;
        if (t[i] == ')') curr--;
        if (curr < 0) return false;
    }
    if (curr > 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        string n = "()";
        bool br = false;
        for (int i = 0; i < 2; i++) {
            for (int q = 0; q < 2; q++) {
                for (int r = 0; r < 2; r++) {
                    string t = "";
                    for (int v = 0; v < s.size(); v++) {
                        if (s[v] == 'A') t += n[i];
                        if (s[v] == 'B') t += n[q];
                        if (s[v] == 'C') t += n[r];
                    }
                    if (check(t)) br = true;
                }
            }
        }
        if (br) cout << "YES\n";
        else cout << "NO\n";
    }
}
