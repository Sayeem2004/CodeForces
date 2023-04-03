#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;
        sort(V.begin(), V.end());

        long long ans = 1;
        for (long long &v : V) ans *= v;
        cout << (ans + N - 1) * 2022 << '\n';
    }
}
