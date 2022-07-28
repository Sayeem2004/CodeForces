#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        int ans = 15;
        for (int q = 0; q <= 15; q++) {
            for (int r = 0; r <= 15; r++) {
                if (((a+q) * (1 << r)) % 32768 == 0)
                    ans = min(ans, q+r);
            }
        }
        cout << ans << " ";
    }
    cout << "\n";
}
