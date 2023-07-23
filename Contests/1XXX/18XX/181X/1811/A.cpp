#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        char K; cin >> K;
        string S; cin >> S;

        bool fnd = false;
        for (int i = 0; i < N; i++) {
            if (S[i] < K && !fnd) {
                cout << K << S[i];
                fnd = true;
            } else cout << S[i];
        }

        if (!fnd) cout << K;
        cout << "\n";
    }
}
