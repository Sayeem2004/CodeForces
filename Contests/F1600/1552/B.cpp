#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        arr<int,6> M;
        vector<arr<int,5>> T(n);
        for (int i = 0; i < n; i++) {
            vector<int> V(5);
            for (int q = 0; q < 5; q++) {
                cin >> V[q];
                T[i][q] = V[q];
            }
            if (i == 0) {
                for (int q = 0; q < 5; q++)
                    M[q] = V[q];
                M[5] = 0;
            } else {
                int cnt = 0;
                for (int q = 0; q < 5; q++)
                    if (V[q] < M[q]) cnt++;
                if (cnt >= 3) {
                    for (int q = 0; q < 5; q++)
                        M[q] = V[q];
                    M[5] = i;
                }
            }
        }
        bool br = true;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int q = 0; q < 5; q++) {
                if (T[i][q] < M[q]) cnt++;
            }
            if (cnt >= 3) {
                br = false; break;
            }
        }
        if (br) cout << M[5]+1 << "\n";
        else cout << -1 << "\n";
    }
}
