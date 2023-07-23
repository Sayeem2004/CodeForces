#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;
        bool fnd = false;

        for (int i = 0; i < N; i++) {
            int x; cin >> x;
            if (x == 1) fnd = true;
        }

        if (fnd) cout << "YES\n";
        else cout << "NO\n";
    }
}
