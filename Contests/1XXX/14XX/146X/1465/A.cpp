#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int count = 0;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == ')') {
                count++;
            } else {
                break;
            }
        }
        if (count > n-count) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}
