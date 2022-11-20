#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        string s; cin >> s;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        long long i = 0, ans = 0;
        while (i < n) {
            if (s[i] == '1') {
                ans += V[i];
                i++;
            } else {
                long long mn = V[i], sm = V[i];
                while (i < n && s[i+1] == '1') {
                    mn = min(mn, V[i+1]);
                    sm += V[i+1];
                    i++;
                }
                ans += sm-mn;
                i++;
            }
        }
        cout << ans << "\n";
    }
}
