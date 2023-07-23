#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N; cin >> N;
        long long ans = N;

        while (N > 0) {
            ans += N / 2;
            N /= 2;
        }

        cout << ans << '\n';
    }
}
