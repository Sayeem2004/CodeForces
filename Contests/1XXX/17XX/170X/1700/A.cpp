#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, m; cin >> n >> m;
        cout << m*(m+1)/2 + m*(n-1) + m*(n-1)*n/2 << "\n";
    }
}
