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

        int ans = 1e9;
        for (int i = 0; i < N; i++) {
            int sm = 0;
            for (int q = 0; q <= i; q++) sm += V[q];

            int curr = 0, len = 0, mx = i+1;
            bool br = false;
            for (int q = i+1; q < N; q++) {
                curr += V[q]; len++;
                if (curr > sm) { br = true; break; }
                if (curr == sm) { curr = 0; mx = max(mx, len); len = 0; }
            }

            if (!br && curr == 0) ans = min(ans, mx);
        }

        cout << ans << '\n';
    }
}
