#include <bits/stdc++.h>
using namespace std;

int solve(vector<long long> &V, long long i, long long k, long long g, long long b) {
    if (i == V.size()) return i;

    if (k > V[i]) {return solve(V, i+1, k + V[i] / 2, g , b);}
    else {
        int ans = i;

        if (g > 0) ans = max(ans, solve(V, i, 2*k, g-1, b));
        if (b > 0) ans = max(ans, solve(V, i, 3*k, g, b-1));

        return ans;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long t; cin >> t; while (t--) {
        long long n, k; cin >> n >> k;

        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        sort(V.begin(), V.end());

        cout << solve(V, 0, k, 2, 1) << "\n";
    }
}
