#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int i = 0;
        for (; i < n/2; i++) {
            if (s[i] == s[n-i-1]) break;
        }

        cout << n - 2*i << "\n";
    }
}
