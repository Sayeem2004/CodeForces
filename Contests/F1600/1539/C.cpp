#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> V(n);
    for (int i = 0; i < n; i++)
        cin >> V[i];
    sort(V.begin(), V.end());
    vector<ll> D;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (V[i]-V[i-1] > x) {
            D.push_back((V[i]-V[i-1]-1)/x);
            ans++;
        }
    }
    sort(D.begin(), D.end());
    for (int i = 0; i < D.size(); i++) {
        if (k >= D[i]) {
            k -= D[i];
            ans--;
        }
    }
    cout << ans << "\n";
}
