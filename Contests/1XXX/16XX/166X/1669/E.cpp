#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        map<string, long long> M;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            M[s]++;
        }

        long long ans = 0;
        for (auto [s, cnt] : M) {
            for (char c = 'a'; c <= 'k'; c++) {
                for (char d = 'a'; d <= 'k'; d++) {
                    string t = ""; t += c; t += d;
                    if (t[0] == s[0] ^ t[1] == s[1])
                        ans += cnt * M[t];
                }
            }
        }

        cout << ans/2 << "\n";
    }
}
