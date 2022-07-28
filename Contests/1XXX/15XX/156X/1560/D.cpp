#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int edit(string a, string b) {
    int c = 0;
    for (int i = 0; i < a.size(); i++) {
        if (c < b.size() && a[i] == b[c]) c++;
    }
    return a.size() + b.size() - 2*c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int ans = s.size()+1;
        for (ll i = 0; i < 62; i++) {
            ans = min(ans, edit(s, to_string((ll)(1LL << i))));
        }
        cout << ans << "\n";
    }
}
