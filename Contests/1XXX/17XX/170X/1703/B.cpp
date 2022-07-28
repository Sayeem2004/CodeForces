#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> M;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (M[s[i]] != 0) ans++;
            else ans += 2;
            M[s[i]]++;
        }
        cout << ans << "\n";
    }
}
