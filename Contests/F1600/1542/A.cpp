#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < 2*n; i++) {
            int a; cin >> a;
            if (a % 2 == 0) c1++;
            else c2++;
        }
        if (c1 == c2) cout << "Yes\n";
        else cout << "No\n";
    }
}
