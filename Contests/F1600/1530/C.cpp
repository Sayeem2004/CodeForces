#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<ll> V1(n), V2(n);
        for (int i = 0; i < n; i++)
            cin >> V1[i];
        for (int i = 0; i < n; i++)
            cin >> V2[i];
        sort(V1.begin(), V1.end());
        sort(V2.begin(), V2.end());
        vector<ll> M(n+1), Y(n+1);
        for (int i = 1; i <= n; i++) {
            M[i] += M[i-1];
            M[i] += V1[i-1];
        }
        for (int i = 1; i <= n; i++) {
            Y[i] += Y[i-1];
            Y[i] += V2[i-1];
        }
        ll s1 = M[n], s2 = Y[n];
        for (int i = 0; i < 4*n; i++) {
            if (s1-M[(n+i)/4] >= s2-Y[max((n+i)/4-i,0)]) {
                cout << i << "\n";
                break;
            } else {
                s1 += 100;
            }
        }
    }
}
