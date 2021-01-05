#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 t; cin >> t; while (t--) {
        int64 n; cin >> n;
        cout << n-(n/2+1) << "\n";
    }
}
