#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int mx = 0;
        for (auto x : s)
            mx = max(x-'0', mx);
        cout << mx << "\n";
    }
}
