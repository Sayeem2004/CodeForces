#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];
        multiset<int> R;
        int i = n-1, j = n-1;
        while (i >= 0) {
            while (j >= 0 && B[j] == B[j-1]) {
                R.insert(B[j]);
                j--;
            }
            if (A[i] == B[j]) {
                i--; j--;
            } else {
                if (R.count(A[i]) > 0) {
                    R.erase(R.find(A[i]));
                    i--;
                } else break;
            }
        }
        if (i == -1) cout << "YES\n";
        else cout << "NO\n";
    }
}
