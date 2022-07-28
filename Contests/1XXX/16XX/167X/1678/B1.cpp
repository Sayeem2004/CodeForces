#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int prev = 0;
        vector<int> DIV;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                DIV.push_back(i-prev);
                prev = i;
            }
        }
        DIV.push_back(n-prev);
        int ans = 0;
        for (int i = 0; i < DIV.size()-1; i++) {
            if (DIV[i] % 2 == 1) {
                if (i < DIV.size()-2 && DIV[i+1] == 2) {
                    ans += 2;
                    DIV[i+1] -= 2;
                    DIV[i]++;
                    DIV[i+2]++;
                } else {
                    ans++;
                    DIV[i]++;
                    DIV[i+1]--;
                }
            }
        }
        cout << ans << "\n";
    }
}
