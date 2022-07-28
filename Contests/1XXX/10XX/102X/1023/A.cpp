#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    if ((n > m && s.find("*") == string::npos) || n > m+1 || (n < m && s.find("*") == string::npos)) {
        cout << "NO\n";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') break;
        if (s[i] != t[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[n-i-1] == '*') break;
        if (s[n-i-1] != t[m-i-1]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
