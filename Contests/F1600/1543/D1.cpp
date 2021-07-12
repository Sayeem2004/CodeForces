#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    int t; cin >> t; while(t--) {
        int n, k; cin >> n >> k;
        for (int i = 0; i < n; i++) {
            if (i == 0) cout << 0 << endl;
            else cout << (i ^ (i-1)) << endl;
            int r; cin >> r;
            if (r == 1 || r == -1) break;
        }
    }
}
