#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> A(n), B(n);
        for (int &a : A) cin >> a;
        for (int &b : B) cin >> b;
        set<int> S;
        int mx = 0, br = 0;
        for (int i = 0; i < n; i++) {
            if (B[i] == 0) mx = max(mx, A[i]-B[i]);
            else if (A[i] < B[i]) { br = 1; break; }
            else S.insert(A[i] - B[i]);
        }
        if (S.size() > 1 || br || (S.size() != 0 && *S.begin() < mx)) cout << "NO\n";
        else cout << "YES\n";
    }
}
