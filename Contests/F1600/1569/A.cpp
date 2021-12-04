#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool br = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                br = false;
                cout << i << " " << i+1 << "\n";
                break;
            }
        }
        if (br) cout << -1 << " " << -1 << "\n";
    }
}
