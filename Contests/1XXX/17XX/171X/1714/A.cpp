#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, h, m; cin >> n >> h >> m;
        int tm = h*60+m;
        vector<int> V(n);
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            V[i] = a*60+b;
        }
        sort(V.begin(), V.end());
        if (tm > V[n-1]) V[0] += 1440;
        for (int i = 0; i < n; i++) {
            if (V[i] >= tm) {
                int ans = V[i] - tm;
                cout << ans / 60 << " " << ans % 60 << "\n";
                break;
            }
        }
    }
}
