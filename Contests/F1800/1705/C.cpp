#include <bits/stdc++.h>
using namespace std;

char find(vector<array<long long, 4>> &V, string &s, long long k) {
    if (k < 0) return '-';
    else if (k < s.size()) return s[k];
    else {
        for (int i = 0; i < V.size(); i++) {
            if (V[i][0] <= k && V[i][1] >= k)
                return find(V, s, V[i][2]+k-V[i][0]);
        }
    }
    return '-';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, c, q; cin >> n >> c >> q;
        string s; cin >> s;
        vector<array<long long, 4>> V;
        V.push_back({0, n-1, 0, n-1});
        long long pos = n;
        for (int i = 0; i < c; i++) {
            long long l, r; cin >> l >> r; l--; r--;
            V.push_back({pos, pos+r-l, l, r});
            pos += r-l+1;
        }
        for (int i = 0; i < q; i++) {
            long long k; cin >> k; k--;
            cout << find(V, s, k) << "\n";
        }
    }
}
