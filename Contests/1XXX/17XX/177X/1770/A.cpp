#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, M; cin >> N >> M;
        multiset<int> MS;

        for (int i = 0; i < N; i++) {
            int x; cin >> x;
            MS.insert(x);
        }

        for (int i = 0; i < M; i++) {
            int x; cin >> x;
            MS.erase(MS.begin());
            MS.insert(x);
        }

        long long ans = 0;
        for (auto x : MS) ans += x;
        cout << ans << '\n';
    }
}
