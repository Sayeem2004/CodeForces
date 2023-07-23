#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long T; cin >> T; while (T--) {
        long long N, M; cin >> N >> M;

        vector<vector<long long>> V(M, vector<long long>(N));
        for (long long i = 0; i < N; i++) {
            for (long long q = 0; q < M; q++) {
                cin >> V[q][i];
            }
        }

        long long ans = 0;
        for (long long i = 0; i < M; i++) {
            sort(V[i].begin(), V[i].end());

            long long cur = 0, sm = 0;
            for (long long q = 0; q < N; q++) {
                cur += V[i][q] * (q + 1);
                sm += V[i][q]; cur -= sm;
            }

            ans += cur;
        }

        cout << ans << '\n';
    }
}
