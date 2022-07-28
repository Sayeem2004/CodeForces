#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    vector<long long> A(n), B(n);
    for (long long &a : A) cin >> a;
    for (long long &b : B) cin >> b;
    map<long long, long long> MA, MB;
    long long ans = n * (n-1) / 2;
    for (long long a : A) ans -= MA[a]++;
    for (long long b : B) ans -= MB[b]++;
    map<array<long long, 2>, long long> M;
    for (int i = 0; i < n; i++) ans += M[{A[i], B[i]}]++;
    cout << ans << "\n";
}
