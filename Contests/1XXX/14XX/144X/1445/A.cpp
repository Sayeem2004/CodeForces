#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        vector<int> F(n), S(n);
        for (int &i : F) cin >> i;
        for (int &i : S) cin >> i;
        sort(F.begin(),F.end());
        sort(S.rbegin(),S.rend());
        bool br = true;
        for (int i = 0; i < n; i++) {
            if (F[i]+S[i] > k) br = false;
        }
        cout << (br ? "Yes\n" : "No\n");
    }
}
