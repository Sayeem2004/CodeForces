#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        vector<ll> V(k), T(k);
        for (int i = 0; i < k; i++)
            cin >> V[i];
        for (int i = 0; i < k; i++)
            cin >> T[i];
        vector<arr<ll,2>> S(k);
        for (int i = 0; i < k; i++)
            S[i] = {V[i]-1, T[i]};
        vector<ll> L(n, 10000000000), R(n, 10000000000);
        for (auto x : S) {
            L[x[0]] = x[1];
            R[x[0]] = x[1];
        }
        for (int i = 1; i < n; i++)
            L[i] = min(L[i-1]+1, L[i]);
        for (int i = n-2; i >= 0; i--)
            R[i] = min(R[i+1]+1, R[i]);
        for (int i = 0; i < n; i++)
            cout << min(L[i], R[i]) << " ";
        cout << "\n";
    }
}
