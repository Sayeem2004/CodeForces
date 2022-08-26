#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int a = (n + 2) / 3 + 1, b = (n + 2) / 3, c = (n + 2) / 3 - 1;
        while (a+b+c > n) {
            if (c > 1) c--;
            else b--;
        }
        cout << b << " " << a << " " << c << "\n";
    }
}
