#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int o = 0, e = 0;

        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (i % 2 == 0) o += a % 2;
            else e +=  a % 2;
        }

        int ee = n/2, eo = n-n/2;
        if ((o == eo || o == 0) && (e == ee || e == 0)) cout << "YES\n";
        else cout << "NO\n";
    }
}
