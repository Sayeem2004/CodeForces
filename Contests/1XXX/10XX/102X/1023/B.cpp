#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, k; cin >> n >> k;
    if (n < k) cout << max((n - (k-n) + 1) / 2, 0LL) << "\n";
    else if (n == k) cout << (n-1) / 2 << "\n";
    else cout << (k-1) / 2 << "\n";
}
