#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        vector<int> L(26), C(26);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                int c = s[i] - 'A'; C[c]++;
                if (C[c] > 0 && L[c] > 0) {
                    ans++; C[c]--; L[c]--;
                }
            }

            if (s[i] >= 'a' && s[i] <= 'z') {
                int c = s[i] - 'a'; L[c]++;
                if (C[c] > 0 && L[c] > 0) {
                    ans++; C[c]--; L[c]--;
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            int l = min(L[i] / 2, k);
            ans += l; L[i] -= l * 2; k -= l;
            int c = min(C[i] / 2, k);
            ans += c; C[i] -= c * 2; k -= c;
        }

        cout << ans << "\n";
    }
}
