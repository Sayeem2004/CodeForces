#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long a, b, c, d; cin >> a >> b >> c >> d;
        long long gcd = __gcd(b*c, a*d);
        if (b*c == a*d) cout << 0 << "\n";
        else if (gcd == b*c || gcd == a*d) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
}
