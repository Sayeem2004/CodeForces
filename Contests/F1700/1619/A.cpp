#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        cout << (s.size() % 2 == 0 && s.substr(0, s.size()/2) == s.substr(s.size()/2, s.size()/2) ? "YES" : "NO") << "\n";
    }
}
