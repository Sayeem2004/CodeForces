#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        cout << 0 << " ";
        int z = V[0];
        for (int i = 1; i < n; i++) {
            int y = ~V[i] & z;
            cout << y << " ";
            z = V[i] ^ y;
        }
        cout <<  "\n";
    }
}
