#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, x, k; cin >> n >> x >> k;
        if (n < k/x) cout << (n * (n-1)) / 2 << "\n";
        else cout << (n-(k/x))*(k/x) + ((k/x * (k/x-1))/2) << "\n";
    }
}
