#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N, K; cin >> N >> K;

        if (N % 2 == 1 && K % 2 == 0) cout << "NO\n";
        else if (N % 2 == 1 && K > N) cout << "NO\n";
        else cout << "YES\n";
    }
}
