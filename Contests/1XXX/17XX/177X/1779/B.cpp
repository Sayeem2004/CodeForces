#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;

        if (N == 3) cout << "NO\n";
        else {
            cout << "YES\n";

            if (N % 2 == 0) {
                for (int i = 0; i < N; i++) {
                    if (i % 2 == 0) cout << 1 << " ";
                    else cout << -1 << " ";
                }
            } else {
                for (int i = 0; i < N; i++) {
                    if (i % 2 == 0) cout << (N - 2) / 2 << " ";
                    else cout << - (N - 2) / 2 - 1 << " ";
                }
            }

            cout << "\n";
        }
    }
}
