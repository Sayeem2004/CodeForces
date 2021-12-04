#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<ll> F(90);
    F[0] = 0; F[1] = 1;
    for (int i = 2; i < 90; i++)
        F[i] = F[i-1] + F[i-2];
    ll n; cin >> n;
    if (n == 0 || n == 1) {
        cout << 0 <<  " " << 0 << " " << n << "\n";
    } else {
        for (int i = 0; i < 90; i++) {
            if (F[i] == n) {
                cout << F[i-3] << " " << F[i-2] << " " << F[i-2] << "\n";
            }
        }
    }
}
