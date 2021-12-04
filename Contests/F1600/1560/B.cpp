#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int a, b, c; cin >> a >> b >> c;
        int mx = abs(a-b)*2;
        if (a > mx || b > mx || c > mx) cout << -1 << "\n";
        else cout << (c+mx/2 <= mx ? c+mx/2 : c-mx/2) << "\n";
    }
}
