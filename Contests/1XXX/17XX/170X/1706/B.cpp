#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        vector<int> P(n+1, -1);
        map<int, int> M;
        for (int i = 0; i < n; i++) {
            if (P[V[i]] == -1) {
                M[V[i]]++;
                P[V[i]] = i;
            } else {
                if ((i - P[V[i]]) % 2 == 1) {
                    M[V[i]]++;
                    P[V[i]] = i;
                }
            }
        }
        for (int i = 1; i <= n; i++)
            cout << M[i] << " \n"[i == n];
    }
}
