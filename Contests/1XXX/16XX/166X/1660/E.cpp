#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<string> M(n);
        for (int i = 0; i < n; i++) cin >> M[i];
        long long ans = 1000000000, tot = 0;
        for (string r : M) {
            for (char c : r) {
                if (c == '1') tot++;
            }
        }
        for (int i = 0; i < n; i++) {
            long long cnt = 0;
            for (int q = 0; q < n; q++)
                if (M[(i+q)%n][q] == '1') cnt++;
            ans = min(ans, n+tot-cnt-cnt);
        }
        cout << ans << "\n";
    }
}
