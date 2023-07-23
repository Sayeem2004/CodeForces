#include <bits/stdc++.h>
using namespace std;

int calc(int n) {
    string s = to_string(n);
    int mn = s[0]-'0', mx = s[0]-'0';
    for (int i = 1; i < s.size(); i++) {
        mn = min(mn, s[i]-'0');
        mx = max(mx, s[i]-'0');
    }
    return mx-mn;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int L, R; cin >> L >> R;

        int ans = -1, sm = -1;
        for (int i = 0; i < 100; i++) {
            if (L+i > R) break;
            int cur = calc(L+i);
            if (cur > sm) { sm = cur; ans = L+i; }
        }

        cout << ans << '\n';
    }
}
