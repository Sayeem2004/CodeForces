#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            string s; cin >> s;
            for (int q = 0; q < k; q++) {
                if (s[q] == 'D') V[i] = (V[i]+1) % 10;
                else V[i] = (V[i]-1+10) % 10;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << V[i] << " \n"[i == n-1];
        }
    }
}
