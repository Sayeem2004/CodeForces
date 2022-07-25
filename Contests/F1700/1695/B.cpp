#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        if (n % 2 == 1) cout << "Mike\n";
        else {
            long long mn1 = 1000000000000, pos1 = -1, mn2 = 10000000000000, pos2 = -1;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    if (V[i] < mn1) { mn1 = V[i]; pos1 = i; }
                }
                else {
                    if (V[i] < mn2) { mn2 = V[i]; pos2 = i; }
                }
            }
            if (mn1 < mn2) cout << "Joe\n";
            else if (mn1 > mn2) cout << "Mike\n";
            else cout << (pos1 < pos2 ? "Joe\n" : "Mike\n");
        }
    }
}
