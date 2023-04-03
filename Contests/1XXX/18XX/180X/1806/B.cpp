#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < N; i++) {
            int x; cin >> x;
            if (x == 0) cnt0++;
            else if (x == 1) cnt1++;
        }

        int ans = 0;
        if (cnt0 > N - cnt0 + 1) ans++;
        if (ans == 1 && cnt1 > 0 && cnt1 + cnt0 == N) ans++;
        cout << ans << "\n";
    }
}
