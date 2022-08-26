#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        vector<vector<long long>> V(n, vector<long long>(m));
        for (vector<long long> &r : V) {
            for (long long &c : r) {
                cin >> c;
            }
        }
        vector<long long> P(n, 0);
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                P[i] += V[i][q] * (m-q);
            }
        }
        for (int i = 0; i < n-1; i++) {
            if (P[i] != P[i+1]) {
                cout << (P[i] < P[i+1] ? i+1 : i+2) << " " << abs(P[i+1]-P[i]) << "\n";
                break;
            }
        }
    }
}
