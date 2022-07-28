#include <bits/stdc++.h>
using namespace std;
#define ll int64_t


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) cin >> V[i];
    sort(V.begin(), V.end());
    for (auto x : V) cout << x << " ";
    cout << "\n";
}
