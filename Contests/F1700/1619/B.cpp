#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        set<long long> S;
        for (long long i = 1; i <= (long long)(sqrt(n))+1; i++) {
            if (i * i <= n) S.insert(i * i);
            if (i * i * i <= n) S.insert(i * i * i);
        }
        cout << S.size() << "\n";
    }
}
