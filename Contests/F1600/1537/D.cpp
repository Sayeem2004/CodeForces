#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n; cin >> n;
        if (n % 2 == 1) cout << "Bob" << "\n";
        else {
            int c = 0;
            while (n % 2 == 0) {
                n /= 2;
                c++;
            }
            if (n > 1) cout << "Alice" << "\n";
            else {
                if (c % 2 == 0) cout << "Alice" << "\n";
                else cout << "Bob" << "\n";
            }
        }
    }
}
