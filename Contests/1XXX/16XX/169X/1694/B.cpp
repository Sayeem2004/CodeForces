#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        string s; cin >> s;
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) ans += i;
        }
        cout << ans+n << "\n";
    }
}
