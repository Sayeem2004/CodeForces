#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        set<int> S;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            S.insert(a);
        }
        cout << S.size()-((n-S.size()) % 2 == 1) << "\n";
    }
}
