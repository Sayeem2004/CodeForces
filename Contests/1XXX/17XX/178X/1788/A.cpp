#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<int> V(N);
        for (int &v : V) cin >> v;

        int cnt2 = 0;
        for (int v : V) if (v == 2) cnt2++;

        if (cnt2 % 2 == 1) cout << -1 << "\n";
        else {
            int curr = 0;
            for (int i = 0; i < N; i++) {
                if (V[i] == 2) curr++;
                if (curr == cnt2 / 2) {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }
}
