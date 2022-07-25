#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, m; cin >> n >> m;
    vector<long long> V(n);
    for (long long &v : V) cin >> v;
    vector<long long> D1(n), D2(n);
    D1[0] = 0; D2[n-1] = 0;
    for (int i = 1; i < n; i++)
        D1[i] = D1[i-1] + min(V[i] - V[i-1], 0LL);
    for (int i = n-2; i >= 0; i--)
        D2[i] = D2[i+1] + min(V[i] - V[i+1], 0LL);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b; a--; b--;
        if (a < b) cout << (D1[b] - D1[a]) * -1 << "\n";
        else cout << (D2[b] - D2[a]) * -1 << "\n";
    }
}
