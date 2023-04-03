#include <bits/stdc++.h>
using namespace std;

template<class T> struct disjoint_set {
    unordered_map<T, T> TREE; unordered_map<T, int> SIZE; // Variables & Helpers

    disjoint_set() { } // Constructors
    disjoint_set(vector<T> V) { for (T x : V) add(x); }

    bool add(T x) { return TREE.count(x) ? 0 : (TREE[x] = x, SIZE[x] = 1); } // Mutators
    bool unite(T x, T y) { x = get(x), y = get(y); // Union by size
        if (x == y) return 0; if (SIZE[x] < SIZE[y]) swap(x, y);
        TREE[y] = x; SIZE[x] += SIZE[y]; return 1; }

    int size(T x) { return SIZE[get(x)]; } // Accessors
    bool same(T x, T y) { return get(x) == get(y); }
    T get(T x) { return TREE[x] == x ? x : TREE[x] = get(TREE[x]); }
    void print() { for (auto i = TREE.begin(); i != TREE.end(); i++)
        printf("%d -> {%d} (%d)\n", i->first, get(i->first), size(i->first)); }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int n; cin >> n;
    int a, b; cin >> a >> b;
    int c, d; cin >> c >> d;

    disjoint_set<int> DS;
    vector<string> G(n);
    for (int i = 0; i < n; i++) {
        cin >> G[i];
        for (int q = 0; q < n; q++) DS.add(i * n + q);
    }

    vector<pair<int, int>> D = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for (int i = 0; i < n; i++) {
        for (int q = 0; q < n; q++) {
            for (auto d : D) {
                int x = i + d.first, y = q + d.second;
                if (x < 0 || x >= n || y < 0 || y >= n) continue;
                if (G[i][q] == G[x][y]) DS.unite(i * n + q, x * n + y);
            }
        }
    }

    int ab = DS.get((a - 1) * n + b - 1);
    int cd = DS.get((c - 1) * n + d - 1);
    int ans = 1e9;

    for (int i = 0; i < n; i++) {
        for (int q = 0; q < n; q++) {
            for (int r = 0; r < n; r++) {
                for (int s = 0; s < n; s++) {
                    if (DS.get(i * n + q) == ab && DS.get(r * n + s) == cd) {
                        ans = min(ans, abs(i - r) * abs(i - r) + abs(q - s) * abs(q - s));
                    }
                    if (DS.get(i * n + q) == cd && DS.get(r * n + s) == ab) {
                        ans = min(ans, abs(i - r) * abs(i - r) + abs(q - s) * abs(q - s));
                    }
                }
            }
        }
    }

    cout << ans << "\n";
}
