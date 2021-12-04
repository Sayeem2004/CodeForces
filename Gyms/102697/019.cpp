#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a >= k) ans++;
    }
    cout << ans << "\n";
}
