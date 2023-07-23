#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N, K; cin >> N >> K;

        if (K > 32) cout << N+1 << "\n";
        else cout << min(N+1, (1LL << K)) << "\n";
    }
}
