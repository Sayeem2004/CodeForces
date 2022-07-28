#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int gcd(int a, int b) {
        if (a == 0) return b;
        return gcd(b%a, a);
    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        int mx = 0, mxp = -1;
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            if (V[i] > mx) {
                mx = V[i];
                mxp = i;
            }
        }
        vector<bool> D(n);
        cout << mx << " ";
        D[mxp] = true;
        vector<arr<int,2>> A;
        for (int i = 0; i < n; i++) {
            if (gcd(V[i], mx) != 1 && !D[i]) {
                A.push_back({V[i],i});
            }
        }
        int gc = mx;
        for (int i = 0; i < A.size(); i++) {
            int mx2 = 0, mxp2 = 0;
            for (int q = 0; q < A.size(); q++) {
                if (gcd(gc, A[q][0]) > mx2 && !D[A[q][1]]) {
                    mx2 = gcd(gc, A[q][0]);
                    mxp2 = A[q][1];
                }
            }
            D[mxp2] = true;
            gc = mx2;
            cout << V[mxp2] << " ";
        }
        for (int i = 0; i < n; i++) {
            if (!D[i]) cout << V[i] << " ";
        }
        cout << "\n";
    }
}
