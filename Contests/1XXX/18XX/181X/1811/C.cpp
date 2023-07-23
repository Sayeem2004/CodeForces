#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<int> V(N-1);
        for (int &v : V) cin >> v;

        cout << V[0] << " ";
        for (int i = 1; i < N-1; i++) {
            cout << min(V[i-1], V[i]) << " ";
        }
        cout << V[N-2] << "\n";
    }
}
