#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> V(n);
    for (int i = 0; i < n; i++)
        cin >> V[i];
    if (n == 1) {
        cout << 1 << " " << 1 << "\n";
        cout << 0 << "\n";
        cout << 1 << " " << 1 << "\n";
        cout << 0 << "\n";
        cout << 1 << " " << 1 << "\n";
        cout << -V[0] << "\n";
    } else {
        cout << 1 << " " << 1 << "\n";
        cout << -V[0] << "\n";
        V[0] = 0;
        cout << 1 << " " << n << "\n";
        for (int i = 0; i < n; i++)
            cout << -V[i] * n << " ";
        cout <<  "\n";
        cout << 2 << " " << n << "\n";
        for (int i = 1; i < n; i++)
            cout << V[i] * (n-1) << " ";
        cout <<  "\n";
    }
}
