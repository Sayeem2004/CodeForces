#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, S, R; cin >> N >> S >> R;
        vector<int> V(N, 0);

        V[N-1] = S - R;
        while (R > 0) {
            for (int i = 0; i < N-1; i++) {
                if (R == 0) break;
                V[i]++; R--;
            }
        }

        for (int v : V) cout << v << " ";
        cout << "\n";
    }
}
