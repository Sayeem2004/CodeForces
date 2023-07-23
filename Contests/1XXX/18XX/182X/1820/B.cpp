#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long T; cin >> T; while (T--) {
        string S; cin >> S;
        long long pos = 0;
        while (pos < S.size() && S[pos] == '1') pos++;

        long long cnt = 0, ans = 0;
        for (long long i = pos; i < S.size(); i++) {
            if (S[i] == '0') {
                long long half = (cnt + 1) / 2;
                ans = max(ans, half * (cnt + 1 - half));
                cnt = 0;
            } else cnt++;

        }

        long long rem = pos + cnt;
        long long half = (rem + 1) / 2;
        ans = max(ans, half * (rem + 1 - half));

        if (rem == S.size()) ans = rem * rem;
        cout << ans << '\n';
    }
}
