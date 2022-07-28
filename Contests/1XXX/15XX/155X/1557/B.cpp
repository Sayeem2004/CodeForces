#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        vector<int> V(n), S(n);
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            V[i] = S[i] = a;
        }
        sort(S.begin(),S.end());
        map<int,int> C;
        for (auto x : S) {
            C[x] = C.size();
        }
        for (int i = 0; i < n; i++)
            V[i] = C[V[i]];
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (V[i] != V[i-1]+1) cnt++;
        }
        if (cnt <= k) cout << "YES\n";
        else cout << "NO\n";
    }
}
