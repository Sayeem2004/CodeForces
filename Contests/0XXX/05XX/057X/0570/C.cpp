#include <bits/stdc++.h>
using namespace std;

template<class T> struct seg_tree {
    // Variable declarations
    vector<T> SEG; int N; T DEF = {NULL, NULL, NULL};

    // Combination operation
    T combine(T a, T b) { return {a[0], b[1], a[2]+b[2]+(a[1]+b[0]==2)}; }

    // Constructors
    seg_tree(int n) { N = n; SEG.assign(2 * N, DEF); }
    seg_tree(int n, T def) { N = n; DEF = def; SEG.assign(2 * N, DEF); }

    // Mutators
    void pull(int p) { SEG[p] = combine(SEG[2 * p], SEG[2 * p + 1]); }
    void update(int p, T val) {
        if (p < 0 || p >= N) return;
        SEG[p += N] = val;
        for (p /= 2; p; p /= 2) pull(p);
    }

    // Accessors
    T get(int p) { return (p < 0 || p >= N ? DEF : SEG[p + N]); }
    void print() { for (int i = 1; i < 2 * N; i++) cout << SEG[i] << " \n"[i == 2*N-1]; }
    T query(int l, int r) { // [l, r]
        if (l < 0 || r < 0 || l >= N || r >= N || l > r) return DEF;
        T ra = DEF, rb = DEF;
        for (l += N, r += N+1; l < r; l /= 2, r /= 2) {
            if (l & 1) ra = combine(ra, SEG[l++]);
            if (r & 1) rb = combine(SEG[--r], rb);
        }
        return combine(ra, rb);
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    string s; cin >> s;
    seg_tree<array<int, 3>> ST(n);
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') ST.update(i, {1, 1, 0});
        else ST.update(i, {0, 0, 0});
    }
    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        char c; cin >> c;
        if (c == '.') ST.update(--t, {1, 1, 0});
        else ST.update(--t, {0, 0, 0});
        cout << ST.query(0, n-1)[2] << "\n";
    }
}
