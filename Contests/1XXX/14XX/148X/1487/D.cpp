#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        cout << ((int)sqrt(2*n) - 1 - ((int)sqrt(2*n) % 2 == 0)) / 2 << "\n";
    }
}
