#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        if (s[0] != s[s.size()-1]) s[s.size()-1] = s[0];
        cout << s << "\n";
    }
}
