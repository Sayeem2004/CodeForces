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

bool check(int m, vector<int> &U, vector<pair<int, int>> &V, segment_tree<int> &ST) {
    for (int i = 0; i <= m; i++) ST.update(U[i] - 1, 1);
    for (int i = m+1; i < U.size(); i++) ST.update(U[i] - 1, 0);

    for (pair<int, int> p : V) {
        if (ST.query(p.first - 1, p.second - 1) > (p.second - p.first + 1) / 2)
            return true;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, M; cin >> N >> M;
        segment_tree<int> ST(N, 0);
        vector<pair<int, int>> V(M);

        for (pair<int, int> &p : V) cin >> p.first >> p.second;

        int Q; cin >> Q;
        vector<int> U(Q);
        for (int &u: U) cin >> u;

        int l = 0, r = Q;
        while (l < r) {
            int m = (l + r) / 2;

            if (check(m, U, V, ST)) r = m;
            else l = m + 1;
        }

        int ans = (l + r) / 2;
        if (ans == Q) cout << -1 << '\n';
        else cout << ans + 1 << '\n';
    }
}
