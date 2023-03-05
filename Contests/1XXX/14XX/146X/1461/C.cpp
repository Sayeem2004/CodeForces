#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout << fixed << setprecision(6);

    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<int> V(n);
        for (int &v : V) cin >> v;

        int mn = n;
        while (n > 0) {
            if (V[mn - 1] == mn) mn--;
            else break;
        }

        double comp = 1;
        for (int i = 0; i < m; i++) {
            int a; cin >> a;
            double b; cin >> b;
            if (a >= mn) comp *= (1 - b);
        }

        if (mn == 0) cout << 1.0 << '\n';
        else cout << 1 - comp << '\n';
    }
}
