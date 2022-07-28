#include <bits/stdc++.h>
using namespace std;

vector<array<long long, 2>> expand(vector<long long> V, long long m) {
    vector<array<long long, 2>> R(V.size());
    for (int i = 0; i < V.size(); i++) {
        long long curr = 1;
        while (V[i] % (curr*m) == 0) curr *= m;
        R[i] = {V[i] / curr, curr};
    }
    vector<array<long long, 2>> RET;
    for (int i = 0; i < R.size(); i++) {
        long long j = 0;
        while (R[i+j+1][0] == R[i][0]) {
            j++;
            R[i][1] += R[i+j][1];
        }
        RET.push_back(R[i]);
        i += j;
    }
    return RET;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        vector<long long> A(n);
        for (long long &a : A) cin >> a;

        long long k; cin >> k;
        vector<long long> B(k);
        for (long long &b : B) cin >> b;
        vector<array<long long, 2>> RA = expand(A, m);
        vector<array<long long, 2>> RB = expand(B, m);
        if (RA.size() != RB.size()) cout << "NO\n";
        else {
            bool br = false;
            for (int i = 0; i < RA.size(); i++) {
                if (RA[i][0] != RB[i][0] || RA[i][1] != RB[i][1]) {
                    br = true; break;
                }
            }
            if (br) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}
