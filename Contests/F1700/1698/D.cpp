#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int l = 1, r = n;
        while (l < r) {
            int m = (l+r)/2;
            cout << "? " << l << " " << m << endl;
            int cnt = 0;
            for (int i = 0; i <= m-l; i++) {
                int a; cin >> a;
                if (a >= l && a <= m) cnt++;
            }
            if (cnt % 2 == 1) r = m;
            else l = m+1;
        }
        cout << "! " << l << endl;
    }
}
