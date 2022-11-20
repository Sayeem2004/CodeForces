#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    set<char> S;
    for (char c : s) S.insert(c);
    cout << (S.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}
