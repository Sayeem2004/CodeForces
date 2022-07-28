#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        int cz = 0;
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            cz += (V[i] == 0);
        }
        if (cz == n) cout << 0 << "\n";
        else if (cz == 0) cout << 1 << "\n";
        else {
            int cnt = 0, prev = -1;
            for (int i = 0; i < n; i++) {
                if (V[i] == 0) {
                    cnt += min(1, i-prev-1);
                    prev = i;
                }
            }
            if (prev != n-1) cnt++;
            cout << min(2, cnt) << "\n";
        }
    }
}
