#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        sort(V.begin(), V.end());

        vector<int> A(n);
        int l = 0, r = n-1;
        for (int i = n-1; i >= 0; i--) {
            if (i % 2 == 0) A[i] = V[l++];
            else A[i] = V[r--];
        }

        for (int &a : A) cout << a << " ";
        cout << "\n";
    }
}
