#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> X(n), Y(n);
        for (int i = 0; i < n; i++)
            cin >> X[i] >> Y[i];
        sort(X.begin(),X.end());
        sort(Y.begin(),Y.end());
        if (n % 2 == 1) {
            cout << 1 << "\n";
        } else {
            long long dy = abs(Y[n/2] - Y[(n-1)/2]);
            long long dx = abs(X[n/2] - X[(n-1)/2]);
            cout << (dy+1)*(dx+1) << "\n";
        }
    }
}
