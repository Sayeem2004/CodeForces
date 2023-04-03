#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long T; cin >> T; while (T--) {
        long long N; cin >> N;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;

        vector<long long> P(N + 1);
        for (long long i = 0; i < N; i++) {
            P[i + 1] = P[i] + V[i];
        }

        long long l = 1, r = N;
        while (l < r) {
            long long m = (l + r) / 2;
            cout << "? " << m - l + 1 << " ";
            for (long long i = l; i <= m; i++) {
                cout << i << " ";
            }
            cout << endl;

            long long exp = P[m] - P[l - 1];
            long long res; cin >> res;

            if (res > exp) r = m;
            else l = m + 1;
        }

        cout << "! " << (l+r)/2 << endl;
    }
}
