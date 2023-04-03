#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    string s; cin >> s;
    vector<int> F(26);
    for (char c : s) F[c - 'a']++;

    int odd = 0;
    for (int &f : F) odd += f % 2;
    cout << (odd <= 1 || odd % 2 ? "First" : "Second") << "\n";
}
