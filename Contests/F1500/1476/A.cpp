#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, x; cin >> n >> x;
        if (n > x) x = (n/x * x) + (n % x == 0 ? 0 : x);
        cout << x/n + (x%n != 0) << "\n";
    }
}
