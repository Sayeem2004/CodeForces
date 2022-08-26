#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> S(n), F(n);
        for (int &s : S) cin >> s;
        for (int &f : F) cin >> f;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cout << (F[i]-max(mx, S[i])) << " \n"[i == n-1];
            mx = max(mx, F[i]);
        }
    }
}
