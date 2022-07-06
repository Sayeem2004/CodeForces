#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int sm = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a > 1) sm += (a-1);
        }
        if (sm % 2 == 0) cout << "maomao90\n";
        else cout << "errorgorn\n";
    }
}
