#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;

        int mn = 1, mx = N * N;
        vector<vector<int>> A(N, vector<int>(N, 0));
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                for (int q = 0; q < N; q++) {
                    if ((i + q) % 2 == 0) A[i][q] = mx--;
                    else A[i][q] = mn++;
                }
            } else {
                for (int q = N-1; q >= 0; q--) {
                    if ((i + q) % 2 == 0) A[i][q] = mx--;
                    else A[i][q] = mn++;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            for (int q = 0; q < N; q++) {
                cout << A[i][q] << " ";
            }
            cout << "\n";
        }
    }
}
