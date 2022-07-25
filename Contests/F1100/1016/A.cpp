#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, m; cin >> n >> m;
    long long sm = 0;
    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        cout << (sm+a) / m - sm / m << " ";
        sm += a;
    }
    cout << "\n";
}
