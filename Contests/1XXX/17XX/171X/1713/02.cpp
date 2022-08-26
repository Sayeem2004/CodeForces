#include <bits/stdc++.h>
using namespace std;

void fill(vector<long long> &V, long long n) {
    if (n == -1) return;
    long long rt = sqrt(n);
    if (rt*rt != n) rt++;
    for (long long i = rt*rt-n; i <= n; i++) {
        V[i] = rt*rt-i;
    }
    fill(V, rt*rt-n-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        fill(V, n-1);
        for (long long v : V) cout << v << " ";
        cout << "\n";
    }
}
