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

int transform(int x, int cnt) {
    int prev = x;

    while (cnt--) {
        string t = to_string(prev);
        int sm = 0;
        for (char c : t) sm += c - '0';

        if (sm == prev) return sm;
        else prev = sm;
    }

    return prev;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, Q; cin >> N >> Q;
        vector<int> V(N);
        for (int &v : V) cin >> v;

        segment_tree<int> ST(N, 0);
        for (int i = 0; i < Q; i++) {
            int t; cin >> t;

            if (t == 1) {
                int l, r; cin >> l >> r; l--;
                ST.update(l, ST.get(l) + 1);
                ST.update(r, ST.get(r) - 1);
            } else {
                int p; cin >> p; p--;
                int cnt = ST.query(0, p);
                cout << transform(V[p], cnt) << "\n";
            }
        }
    }
}
