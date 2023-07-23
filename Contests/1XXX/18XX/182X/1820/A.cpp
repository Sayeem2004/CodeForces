#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        string S; cin >> S;

        int cnt = S[0] == '_' ? 1 : 0;
        for (int i = 1; i < S.size(); i++) {
            if (S[i] == '_' && S[i - 1] == '_') cnt++;
        }

        if (S.back() == '_') cnt++;
        if (S.back() == '^' && S.size() == 1) cnt++;
        cout << cnt << '\n';
    }
}
