#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n), P(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        for (int i = 0; i < n; i++)
            cin >> P[i];
        vector<arr<int,2>> U, B;
        int us = 0, bs = 0;
        for (int i = 0; i < n; i++) {
            if (V[i] > P[i]) {
                U.push_back({V[i]-P[i], i});
                us += V[i]-P[i];
            }
            if (V[i] < P[i]) {
                B.push_back({P[i]-V[i], i});
                bs += P[i]-V[i];
            }
        }
        if (us != bs) {
            cout << -1 << "\n";
        } else {
            cout << us << "\n";
            int l = 0, r = 0;
            while (l < U.size() && r < B.size()) {
                cout << U[l][1]+1 << " " << B[r][1]+1 << "\n";
                U[l][0]--;
                B[r][0]--;
                if (U[l][0] == 0) l++;
                if (B[r][0] == 0) r++;
            }
        }
    }
}
