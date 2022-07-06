#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    vector<int> V;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) V.push_back(s[i]-'0');
    }
    sort(V.begin(), V.end());
    for (int i = 0; i < V.size(); i++) {
        if (i != V.size()-1) cout << V[i] << "+";
        else cout << V[i] << "\n";
    }
}
