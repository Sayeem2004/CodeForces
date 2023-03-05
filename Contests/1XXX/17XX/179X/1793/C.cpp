#include <bits/stdc++.h>
using namespace std;

template<class T> struct segment_tree {
    // Variable declarations
    vector<T> SEG; int N; T DEF = (T) NULL;
    T (*combine)(T, T) = [](T a, T b) { return max(a, b); };

    // Constructors
    segment_tree(int n) { N = n; SEG.assign(2 * N, DEF); }
    segment_tree(int n, T def) { N = n; DEF = def; SEG.assign(2 * N, DEF); }
    segment_tree(int n, T def, T (*comb)(T, T)) {
        N = n; DEF = def; SEG.assign(2 * N, DEF); combine = comb;
    }

    // Mutators
    void pull(int p) { SEG[p] = combine(SEG[2 * p], SEG[2 * p + 1]); }
    void update(int p, T val) {
        if (p < 0 || p >= N) return;
        SEG[p += N] = val;
        for (p /= 2; p; p /= 2) pull(p);
    }

    // Accessors
    T get(int p) { return (p < 0 || p >= N ? DEF : SEG[p + N]); }
    void print() { for (T elem : SEG) cout << elem << " "; cout << "\n"; }
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
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        segment_tree<int> MX(n, 0, [](int a, int b) { return max(a, b); });
        segment_tree<int> MN(n, 1e9, [](int a, int b) { return min(a, b); });

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            MX.update(i, x);
            MN.update(i, x);
        }

        int l = 0, r = n - 1;
        while (l < r) {
            if (MX.query(l, r) == MX.get(l)) { l++; continue; }
            if (MX.query(l, r) == MX.get(r)) { r--; continue; }
            if (MN.query(l, r) == MN.get(l)) { l++; continue; }
            if (MN.query(l, r) == MN.get(r)) { r--; continue; }
            break;
        }

        if (l == r) cout << -1 << "\n";
        else cout << l + 1 << " " << r + 1 << "\n";
    }
}
