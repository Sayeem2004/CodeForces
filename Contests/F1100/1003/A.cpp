#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map<int,int> M;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        M[x]++;
    }
    int ans = 0;
    for (auto x : M) {
        ans = max(x.second, ans);
    }
    cout << ans << "\n";
    return 0;
}
