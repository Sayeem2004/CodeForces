#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int n; cin >> n;

        if (n == 3) cout << "-1\n";
        else {
            cout << n << " " << n-1 << " ";
            for (int i = 1; i <= n-2; i++) cout << i << " ";
            cout << "\n";
        }
    }
}
