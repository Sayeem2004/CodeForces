#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        string S; cin >> S;

        string ans = "";
        int prev = 0;
        for (int i = 1; i < N; i++) {
            if (i != prev && S[i] == S[prev]) {
                ans += S[i]; prev = i+1;
            }
        }

        cout << ans << "\n";
    }
}
