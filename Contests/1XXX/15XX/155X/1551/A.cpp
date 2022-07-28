#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        cout << n/3 + (n%3 == 1) << " " << n/3  + (n%3 == 2) << "\n";
    }
}
