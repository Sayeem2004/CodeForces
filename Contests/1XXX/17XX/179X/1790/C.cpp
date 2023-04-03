#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> P, vector<int> V) {
    int dif = 0, i = 0, q = 0;
    while (i < P.size() && q < V.size()) {
        if (P[i] != V[q]) { dif++; i++; continue; }
        i++; q++;
    }
    return dif <= 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<vector<int>> V(N, vector<int>(N-1));
        for (int i = 0; i < N; i++) {
            for (int q = 0; q < N-1; q++) {
                cin >> V[i][q];
            }
        }

        int sm = 0;
        for (int i = 0; i < N-1; i++) sm += V[0][i];
        int rem = N * (N+1) / 2 - sm;

        vector<int> ANS(N);
        for (int ans = 0; ans < N; ans++) {
            vector<int> T = V[0];
            T.insert(T.begin() + ans, rem);

            bool ok = true;
            for (int i = 0; i < N; i++) {
                ok &= check(T, V[i]);
            }

            if (ok) { ANS = T; break; }
        }

        for (int ans : ANS) cout << ans << " ";
        cout << "\n";
    }
}
