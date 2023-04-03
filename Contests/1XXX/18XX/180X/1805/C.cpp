#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N, M; cin >> N >> M;

        vector<long long> K(N);
        for (long long &k : K) cin >> k;
        sort(K.begin(), K.end());

        for (int i = 0; i < M; i++) {
            long long a, b, c; cin >> a >> b >> c;

            long long val = 4 * a * c;
            if (val <= 0) { cout << "NO\n"; continue; }

            long long dif = sqrt(val);
            if (dif * dif == val) dif--;
            long long fnd = *lower_bound(K.begin(), K.end(), b - dif);

            if (fnd >= b - dif && fnd <= b + dif) { cout << "YES\n" << fnd << '\n'; }
            else cout << "NO\n";
        }
        cout << '\n';
    }
}
