#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        map<int, int> M;

        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            M[a]++;
        }

        int ans = -1;
        for (auto x : M) {
            if (x.second >= 3) {
                ans = x.first; break;
            }
        }

        cout << ans << "\n";
    }
}
