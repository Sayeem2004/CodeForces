#include <bits/stdc++.h>
using namespace std;

int solve(int l, int r, int x, int a, int b, int i) {
    if (a == b) return i;
    if (abs(a-b) >= x) return i+1;
    if (i > 3) return -1;

    int ans = 1000000000;
    if (abs(a-l) >= x) ans = min(ans, solve(l, r, x, l, b, i+1));
    if (abs(a-r) >= x) ans = min(ans, solve(l, r, x, r, b, i+1));

    if (ans < 1000000000) return ans;
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int l, r, x; cin >> l >> r >> x;
        int a, b; cin >> a >> b;

        cout << solve(l, r, x, a, b, 0) << "\n";
    }
}
