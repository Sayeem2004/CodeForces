#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, a, b; cin >> n >> a >> b;
        string s; cin >> s;
        if (b > 0) {
            cout << n*a + n*b << "\n";
        } else {
            int cnt = 1;
            for (int i = 1; i < n; i++) {
                if (s[i] != s[i-1]) cnt++;
            }
            cout << n*a + (cnt/2 + 1)*b << "\n";
        }
    }
}
