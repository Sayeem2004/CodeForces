#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<ll> A(n), B(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];
    vector<ll> PRE(n+1,0);
    for (int i = 1; i <= n; i++)
        PRE[i] = PRE[i-1]+(A[i-1]*B[i-1]);
    ll ans = PRE[n];
    for (int i = 0; i < n; i++) {
        ll sum1 = A[i]*B[i];
        for (int l=i-1, r=i+1; l >= 0 && r < n; l--, r++) {
            sum1 += A[l]*B[r]; sum1 += A[r]*B[l];
            ans = max(ans, sum1+PRE[l]+PRE[n]-PRE[r+1]);
        }
        ll sum2 = 0;
        for (int l=i, r=i+1; l >= 0 && r < n; l--, r++) {
            sum2 += A[l]*B[r]; sum2 += A[r]*B[l];
            ans = max(ans, sum2+PRE[l]+PRE[n]-PRE[r+1]);
        }
        ll sum3 = 0;
        for (int l=i-1, r=i; l >= 0 && r < n; l--, r++) {
            sum3 += A[l]*B[r]; sum3 += A[r]*B[l];
            ans = max(ans, sum3+PRE[l]+PRE[n]-PRE[r+1]);
        }
    }
    cout << ans << "\n";
}
