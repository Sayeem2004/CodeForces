#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; while (t--) {
        int a, b, c; cin >> a >> b >> c;
        cout << (c/b+1)*b+a << " " << b << " " << c << "\n";
    }
}
