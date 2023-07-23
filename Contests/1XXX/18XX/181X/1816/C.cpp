#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long T; cin >> T; while (T--) {
        long long N; cin >> N;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;

        for (long long i = 1; i < N-1; i++) {
            if (V[i] < V[i-1]) {
                long long dif = V[i-1] - V[i];
                V[i] += dif;
                V[i+1] += dif;
            }
        }

        for (long long i = N-2; i > 0; i--) {
            if (V[i] > V[i+1]) {
                long long dif = V[i] - V[i+1];
                V[i] -= dif;
                V[i-1] -= dif;
            }
        }

        bool ok = true;
        for (long long i = 1; i < N; i++) {
            if (V[i] < V[i-1]) { ok = false; break; }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
