#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N; cin >> N;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;
        sort(V.begin(), V.end());

        if (V[0] != 1) cout << "NO\n";
        else {
            long long sm = 1;
            bool br = false;

            for (int i = 1; i < N; i++) {
                if (sm < V[i]) { br = true; break; }
                sm += V[i];
            }

            if (br) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}
