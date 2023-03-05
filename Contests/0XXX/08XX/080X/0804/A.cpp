#include <bits/stdc++.h>
using namespace std;

long long modpow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod; b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;

    long long ans = 0, cntA = 0, cntB = 0;
    long long mod = 1e9 + 7;

    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && s[i] == 'a' && s[i - 1] == 'b') {
                ans += (modpow(2, cntA, mod) - 1) * cntB;
                ans %= mod;

                cntB = 0;
        }

        if (s[i] == 'a') cntA++;
        else cntB++;
    }

    ans += (modpow(2, cntA, mod) - 1) * cntB;
    ans %= mod;

    cout << ans << "\n";
}
