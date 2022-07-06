#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; getline(cin, s);
    set<char> S;
    for (char c : s) S.insert(c);
    if (s.size() == 2) cout << 0 << "\n";
    else if (s.size() == 3) cout << 1 << "\n";
    else cout << S.size()-4 << "\n";
}
