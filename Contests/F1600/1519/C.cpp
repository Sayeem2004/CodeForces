#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> U(n), S(n);
        for (long long &u : U) cin >> u;
        for (long long &s : S) cin >> s;
        map<long long, vector<long long>> M;
        for (int i = 0; i < n; i++)
            M[U[i]].push_back(S[i]);
        for (auto &x : M) {
            sort(x.second.rbegin(), x.second.rend());
            for (int q = 1; q < x.second.size(); q++) {
                x.second[q] += x.second[q-1];
            }
        }
        vector<long long> A(n+1);
        for (auto x : M) {
            for (int i = 1; i <= x.second.size(); i++) {
                A[i] += x.second[x.second.size() - (x.second.size() % i) - 1];
            }
        }
        for (int i = 1; i <= n; i++)
            cout << A[i] << " \n"[i == n];
    }
}
