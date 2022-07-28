#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n), S(n);
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            V[i] = a;
            S[i] = a;
        }
        sort(S.begin(), S.end());
        bool br = true;
        vector<arr<int,2>> C(100005);
        for (int i = 0; i < n; i++)
            C[V[i]][i%2]++;
        for (int i = 0; i < n; i++)
            C[S[i]][i%2]--;
        for (auto x : C) {
            if (x[0] != 0 || x[1] != 0) {
                br = false; break;
            }
        }
        if (br) cout << "YES\n";
        else cout << "NO\n";
    }
}
