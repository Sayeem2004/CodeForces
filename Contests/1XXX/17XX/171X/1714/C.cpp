#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        int sm = 0;
        string ret = "";
        for (int i = 9; i > 0; i--) {
            if (sm + i >= n) { ret = to_string(n-sm) + ret; break; }
            else { ret = to_string(i) + ret; sm += i; }
        }
        cout << ret << "\n";
    }
}
