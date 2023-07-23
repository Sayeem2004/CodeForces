#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &V, int t) {
    int n = V.size(), i = 1, q = n-2;
    while (i < n-1 && (V[i] - V[0]) <= 2 * t) i++;
    while (q > 0 && (V[n-1] - V[q]) <= 2 * t) q--;

    if (V[q] - V[i] <= 2 * t) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<int> V(N);
        for (int &v : V) cin >> v;
        sort(V.begin(), V.end());

        if (N <= 3) { cout << 0 << '\n'; continue; }

        int l = 0, r = 1e9;
        while (l < r) {
            int m = (l + r) / 2;

            if (check(V, m)) r = m;
            else l = m + 1;
        }

        cout << (l + r) / 2 << "\n";
    }
}
