#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> V(n, vector<int>(m));
        vector<array<int, 2>> S(n*m);
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                cin >> V[i][q];
                S[i*m+q] = {V[i][q], i};
            }
            sort(V[i].begin(), V[i].end());
        }
        sort(S.begin(), S.end());
        vector<vector<int>> A(n, vector<int>(m));
        map<int, int> M;
        for (int i = 0; i < S.size(); i++) {
            if (i < m) {
                A[S[i][1]][i] = S[i][0];
            } else {
                while (A[S[i][1]][M[S[i][1]]] != 0) M[S[i][1]]++;
                A[S[i][1]][M[S[i][1]]] = S[i][0];
            }
        }
        for (vector<int> R : A) {
            for (int c : R) cout << c << " ";
            cout << "\n";
        }
    }
}
