#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> A(n), B(n);
        for (long long &a : A) cin >> a;
        for (long long &b : B) cin >> b;
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            long long dif1 = abs(A[i]-A[i-1]) + abs(B[i]-B[i-1]);
            long long dif2 = abs(A[i]-B[i-1]) + abs(B[i]-A[i-1]);
            ans += min(dif1, dif2);
        }
        cout << ans << "\n";
    }
}
