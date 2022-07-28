#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, q; cin >> n >> q;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        string ret = "";
        long long curr = 0;
        for (int i = n-1; i >= 0; i--) {
            if (V[i] <= curr) ret += "1";
            else {
                if (curr < q) {
                    ret += "1";
                    curr++;
                } else ret += "0";
            }
        }
        reverse(ret.begin(), ret.end());
        cout << ret << "\n";
    }
}
