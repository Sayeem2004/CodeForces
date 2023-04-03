#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        long long sm = 0, zero = 0, neg = 0, mn = 1e9;
        for (int i = 0; i < N; i++) {
            long long x; cin >> x;
            sm += abs(x);

            if (x == 0) zero++;
            if (x < 0) neg++;
            mn = min(mn, abs(x));
        }

        if (zero || (neg % 2 == 0)) cout << sm << '\n';
        else cout << sm - 2 * mn << '\n';
    }
}
