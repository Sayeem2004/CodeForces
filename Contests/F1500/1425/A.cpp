#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        vector<ll> A(2);
        int i = 0;
        while (n != 0) {
            if (n%2 == 1) {
                A[i%2]++;
                n--;
            } else if (n%4 == 0 && n >= 8) {
                A[i%2]++;
                n--;
            } else {
                A[i%2] += n/2;
                n /= 2;
            }
            i++;
        }
        cout << A[0] << "\n";
    }
}
