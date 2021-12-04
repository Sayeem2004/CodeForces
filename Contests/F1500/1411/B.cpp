#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

bool check(ll n) {
    ll t = n;
    while (n > 0) {
        if (n%10 && t % (n%10)) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        for (int i = 0; i <= 2520; i++) {
            if (check(n+i)) {
                cout << n+i << "\n";
                break;
            }
        }
    }
}
