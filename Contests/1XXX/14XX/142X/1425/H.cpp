#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if ((a + b) % 2 == 1) {
            if ((a + d) > 0 && (b + c) > 0) cout << "Ya Ya Tidak Tidak\n";
            else if ((a + d) > 0) cout << "Ya Tidak Tidak Tidak\n";
            else cout << "Tidak Ya Tidak Tidak\n";
        } else {
            if ((a + d) > 0 && (b + c) > 0) cout << "Tidak Tidak Ya Ya\n";
            else if ((a + d) > 0) cout << "Tidak Tidak Tidak Ya\n";
            else cout << "Tidak Tidak Ya Tidak\n";
        }
    }
}
