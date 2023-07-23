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

        cout << max(V[N-1] * V[N-2], V[0] * V[1]) << "\n";
    }
}
