#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int SZ = 1000000;
    int n, x; cin >> n >> x;
    vector<int> V(n);
    for (int &v : V) cin >> v;
    vector<int> F(SZ);
    for (int v : V) F[v]++;
    for (int i = 0; i < SZ-1; i++) {
        F[i+1] += F[i] / (i+1);
        F[i] %= (i+1);
    }
    int pos = 0;
    while (pos < SZ && F[pos] == 0) pos++;
    if (pos >= x) cout << "Yes\n";
    else cout << "No\n";
}
