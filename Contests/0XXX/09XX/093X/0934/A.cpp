#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, m; cin >> n >> m;
    vector<long long> A(n), B(m);

    for (long long &a : A) cin >> a;
    for (long long &b : B) cin >> b;

    vector<vector<long long>> P(n, vector<long long>(m));
    for (int i = 0; i < n; i++) {
        for (int q = 0; q < m; q++) {
            P[i][q] = A[i] * B[q];
        }
    }

    for (int i = 0; i < n; i++) {
        sort(P[i].begin(), P[i].end());
    }

    vector<long long> RGT(n);
    vector<long long> LFT(n);
    for (int i = 0; i < n; i++) {
        RGT[i] = P[i][m - 1];
        LFT[i] = P[i][m - 2];
    }

    sort(RGT.begin(), RGT.end());
    sort(LFT.begin(), LFT.end());
    cout << max(RGT[n - 2], LFT[n - 2]) << "\n";
}
