#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        string s; cin >> s;

        cout << s[0]-'0' + (s.size() - 1) * 9 << '\n';
    }
}
