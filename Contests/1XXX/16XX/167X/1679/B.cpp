#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, q; cin >> n >> q;
    vector<long long> FQI(n, -1), FQV(n, -1);
    long long SQI = -1, SQV = 0, SM = 0;
    for (int i = 0; i < n; i++) {
        cin >> FQV[i];
        SM += FQV[i];
    }
    for (int i = 0; i < q; i++) {
        long long t; cin >> t;
        if (t == 1) {
            long long a, b; cin >> a >> b; a--;
            if (SQI > FQI[a]) {
                SM += (b-SQV);
                FQI[a] = i;
                FQV[a] = b;
            } else {
                SM += (b-FQV[a]);
                FQI[a] = i;
                FQV[a] = b;
            }
        } else {
            long long a; cin >> a;
            SM = a * n;
            SQI = i;
            SQV = a;
        }
        cout << SM << "\n";
    }
}
