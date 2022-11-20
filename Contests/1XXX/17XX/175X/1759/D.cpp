#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;

        long long cpy2 = n, cnt2 = 0;
        while (cpy2 % 2 == 0) {
            cpy2 /= 2;
            cnt2++;
        }

        long long cpy5 = n, cnt5 = 0;
        while (cpy5 % 5 == 0) {
            cpy5 /= 5;
            cnt5++;
        }

        long long k = 1;

        while (cnt2 > cnt5) {
            if (k * 5 <= m) {k *= 5; cnt5++;}
            else break;
        }

        while (cnt5 > cnt2) {
            if (k * 2 <= m) {k *= 2; cnt2++;}
            else break;
        }

        while (k*10 <= m) k *= 10;

        cout << n*(m-m%k) << "\n";
    }
}
