#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;
        vector<int> V(N);
        for (int &v : V) cin >> v;

        int cnt = 0, curr = 1;
        for (int i = 0; i < N; i++) {
            if (V[i] == curr) curr++;
            else cnt++;
        }

        cout << (cnt + K - 1) / K << '\n';
    }
}
