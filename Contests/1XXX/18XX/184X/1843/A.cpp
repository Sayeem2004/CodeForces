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
        sort(V.begin(), V.end());

        int ans = 0;
        for (int i = 0; i < N/2; i++) {
            ans += V[N-i-1] - V[i];
        }

        cout << ans << "\n";
    }
}
