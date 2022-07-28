#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t; while (t--) {
        int64 n, k; cin >> n >> k;
        bool br = true;
        for (int64 i = 0; i < min(n,k); i++) {
            int64 time = (k%(i+1) == 0 ? k/(i+1) : k/(i+1)+1);
            if (i + time <= n) {
                cout << "YES" << "\n";
                br = false; break;
            }
        }
        if (br) cout << "NO" << "\n";
    }
}
