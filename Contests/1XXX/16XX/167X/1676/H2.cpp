#include <bits/stdc++.h>
using namespace std;

template<class T> struct segment_tree {
    vector<T> SEG; int N; T DEF = (T) NULL; // Variables & Helpers
    T (*COMB)(T, T) = [](T a, T b) { return a + b; };

    segment_tree(int n) { N = n; SEG.assign(2 * N, DEF); } // Constructors
    segment_tree(int n, T d) : segment_tree(n) { DEF = d; }
    segment_tree(int n, T d, T (*c)(T, T)) : segment_tree(n, d) { COMB = c; }

    void pull(int p) { SEG[p] = COMB(SEG[2 * p], SEG[2 * p + 1]); } // Mutators
    void update(int p, T v) { if (p < 0 || p >= N) return;
        SEG[p += N] = v; for (p /= 2; p; p /= 2) pull(p); }

    T get(int p) { return (p < 0 || p >= N ? DEF : SEG[p + N]); } // Accessors
    void print() { for (T elem : SEG) cout << elem << " "; cout << "\n"; }
    T query(int l, int r) { T ra = DEF, rb = DEF; // [l, r]
        if (l < 0 || r < 0 || l >= N || r >= N || l > r) return DEF;
        for (l += N, r += N + 1; l < r; l /= 2, r /= 2) {
            if (l & 1) ra = COMB(ra, SEG[l++]);
            if (r & 1) rb = COMB(SEG[--r], rb);
        } return COMB(ra, rb); }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n), S(n);

        for (int i = 0; i < n; i++) {
            cin >> V[i]; S[i] = V[i];
        }
        sort(S.begin(), S.end());

        long long ans = 0;
        segment_tree<int> ST(n+1, 0);
        for (int i = 0; i < n; i++) {
            int pos1 = upper_bound(S.begin(), S.end(), V[i]) - S.begin() - 1;
            int pos2 = ST.query(0, V[i]);
            ans += max(0, pos1 - pos2);
            ST.update(V[i], ST.get(V[i]) + 1);
        }

        cout << ans << "\n";
    }
}
