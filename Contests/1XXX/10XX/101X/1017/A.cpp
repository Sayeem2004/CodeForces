#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int ans = 1, curr = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (i == 0) {
            curr = a+b+c+d;
        } else {
            ans += (a+b+c+d > curr);
        }
    }
    cout << ans << "\n";
}
