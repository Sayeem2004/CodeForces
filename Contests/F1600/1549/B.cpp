#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;
        int ans = 0;
        vector<bool> V(n);
        for (int i = 0; i < n; i++) {
            if (s2[i] == '1') {
                if (s1[i] == '0' && !V[i]) {
                    ans++;
                    V[i] = true;
                } else if (i > 0 && s1[i-1] == '1' && !V[i-1]) {
                    ans++;
                    V[i-1] = true;
                } else if (i < n-1 && s1[i+1] == '1' && !V[i+1]) {
                    ans++;
                    V[i+1] = true;
                }
            }
        }
        cout << ans << "\n";
    }
}
