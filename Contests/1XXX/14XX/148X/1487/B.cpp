#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k; k--;
        if (n % 2 == 0) cout << k % n + 1 << "\n";
        else cout << (k + (k / (n / 2))) % n + 1 << "\n";
    }
}
