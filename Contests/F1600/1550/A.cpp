#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int s = sqrt(n);
        if (s*s == n) cout << s << "\n";
        else cout << s+1 << "\n";
    }
}
