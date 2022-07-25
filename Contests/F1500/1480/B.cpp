#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long a, b, n; cin >> a >> b >> n;
        vector<array<long long, 2>> V(n);
        for (int i = 0; i < n; i++) cin >> V[i][0];
        for (int i = 0; i < n; i++) cin >> V[i][1];
        sort(V.begin(), V.end());
        for (int i = 0; i < n; i++) {
            long long rnd = V[i][1] / a + (V[i][1] % a != 0);
            b -= rnd*V[i][0];
        }
        if (b <= -V[n-1][0]) cout << "NO\n";
        else cout << "YES\n";
    }
}
