#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, z; cin >> n >> z;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            ans = max(ans, a | z);
        }
        cout << ans << "\n";
    }
}
