#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    int x; cin >> x;
    if (s == "ABC" && x < 2000 || s == "ARC" && x < 2800 || s == "AGC" && x >= 1200) cout << "YES\n";
    else cout << "NO\n";
}
