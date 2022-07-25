#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        long long sm = 0;
        bool br = false;
        for (long long i = 0; i < n; i++) {
            long long a; cin >> a;
            sm += a;
            if (sm < (i*(i+1)/2)) {
                br = true;
            }
        }
        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
