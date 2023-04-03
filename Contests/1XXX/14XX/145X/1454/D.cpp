#include <bits/stdc++.h>
using namespace std;

map<long long, long long> prime_factor(long long n) {
    map<long long, long long> factors;
    while (n % 2 == 0) {
        factors[2]++;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 2) factors[n]++;
    return factors;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long t; cin >> t; while (t--) {
        long long n; cin >> n;
        map<long long, long long> factors = prime_factor(n);

        long long ans = 1, cnt = 0;
        for (auto [p, e] : factors) {
            if (e > cnt) { ans = p; cnt = e; }
        }
        long long prod = 1;
        for (auto [p, e] : factors) {
            if (p == ans) continue;
            for (long long i = 0; i < e; i++) prod *= p;
        }

        cout << cnt << "\n";
        for (long long i = 0; i < cnt - 1; i++) cout << ans << " ";
        cout << prod * ans << "\n";
    }
}
