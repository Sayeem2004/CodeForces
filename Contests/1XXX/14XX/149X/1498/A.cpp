#include <bits/stdc++.h>
using namespace std;

long long digsum(long long n) {
    long long ans = 0;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        for (long long i = 0; i < 3; i++) {
            if (__gcd(n+i, digsum(n+i)) > 1) {
                cout << n+i << "\n";
                break;
            }
        }
    }
}
