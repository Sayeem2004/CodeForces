#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        long long curr = 1;
        vector<long long> V(n);
        bool br = false;
        for (int i = 0; i < n; i++) {
            if (curr > 1000000000) {
                br= true; break;
            }
            V[i] = curr;
            curr *= 3;
        }
        if (br) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << V[i] << " \n"[i == n-1];
        }
    }
}
