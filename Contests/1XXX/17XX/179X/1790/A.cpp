#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    string S = "314159265358979323846264338327";
    int T; cin >> T; while (T--) {
        string s; cin >> s;
        int ans = -1;

        for (int i = 0; i < S.size(); i++) {
            if (s[i] == S[i]) ans++;
            else break;
        }

        cout << ans+1 << "\n";
    }
}
