#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, m, k; cin >> n >> m >> k;
        vector<long long> V(k);
        for (long long &v : V) cin >> v;
        vector<long long> R(k), C(k);
        long long rsum = 0, csum = 0;
        for (int i = 0; i < k; i++) {
            R[i] = (V[i] / m > 1 ? V[i] / m : 0);
            rsum += R[i];
        }
        for (int i = 0; i < k; i++) {
            C[i] = (V[i] / n > 1 ? V[i] / n : 0);
            csum += C[i];
        }
        if ((n == 1) || (m == 1) || (n <= 2 && m <= 2)) cout << "No\n";
        else if (n % 2 == 0 && rsum >= n) cout << "Yes\n";
        else if (m % 2 == 0 && csum >= m) cout << "Yes\n";
        else  {
            long long esum1 = 0, emax1 = 0, osum1 = 0, ocnt1 = 0;
            for (auto x : R) {
                if (x % 2 == 0) { esum1 += x; emax1 = max(emax1, x); }
                else { osum1 += x; ocnt1++; }
            }
            if (ocnt1 > 0 && ocnt1 % 2 == 0) osum1--;
            long long esum2 = 0, emax2 = 0, osum2 = 0, ocnt2 = 0;
            for (auto x : C) {
                if (x % 2 == 0) { esum2 += x; emax2 = max(emax2, x); }
                else { osum2 += x; ocnt2++; }
            }
            if (ocnt2 > 0 && ocnt2 % 2 == 0) osum2--;
            if ((esum1 >= n+1 && emax1 >= 4) || (esum1+osum1 >= n && ocnt1 > 0)) cout << "Yes\n";
            else if ((esum2 >= m+1 && emax2 >= 4) || (esum2+osum2 >= m && ocnt2 > 0)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}
