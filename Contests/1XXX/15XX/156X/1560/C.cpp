#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int sq = sqrt(n);
        if (sq*sq == n) cout << sq << " " << 1 << "\n";
        else {
            int dif = sq*2+1;
            if (n-sq*sq <= dif/2) {
                cout << (n-sq*sq) << " " << sq+1 << "\n";
            } else {
                cout << sq+1 << " " << (sq+1)*(sq+1)-n+1 << "\n";
            }
        }
    }
}
