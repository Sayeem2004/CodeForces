#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t; while (t--) {
        int64 n; cin >> n;
        int64 odd = 0, even = 0;
        for (int64 i = 0; i < n; i++) {
            int64 x; cin >> x;
            if (x%2) odd++;
            else even++;
        }
        if (odd == 0) cout << "NO" << "\n";
        else if (odd%2 == 0 && even == 0) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}
