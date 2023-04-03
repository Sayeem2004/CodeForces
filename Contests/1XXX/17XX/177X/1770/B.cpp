#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;

        for (int i = 0; i < N/2; i++) {
            cout << N - i << " " << i + 1 << " ";
        }
        if (N % 2 == 1) cout << N/2 + 1 << " ";
        cout << "\n";
    }
}
