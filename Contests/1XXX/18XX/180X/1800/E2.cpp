#include <bits/stdc++.h>
using namespace std;

template<class T> struct disjoint_set {
    // Variables
    unordered_map<T, T> TREE; unordered_map<T, int> SIZE;

    // Constructor
    disjoint_set() { }
    disjoint_set(vector<T> V) { for (T x : V) add(x); }
    disjoint_set(hash<T> hash) {
        TREE = unordered_map<T, T>(hash); SIZE = unordered_map<T, int>(hash);
    }

    // Mutators
    bool add(T x) { return TREE.count(x) ? 0 : (TREE[x] = x, SIZE[x] = 1, 1); }
    bool unite(T x, T y) { // Union by size
        x = get(x), y = get(y); if (x == y) return 0;
        if (SIZE[x] < SIZE[y]) swap(x, y);
        TREE[y] = x; SIZE[x] += SIZE[y]; return 1;
    }

    // Accessors
    T get(T x) { return TREE[x] == x ? x : TREE[x] = get(TREE[x]); }
    bool same(T x, T y) { return get(x) == get(y); }
    int size(T x) { return SIZE[get(x)]; }
    void print() {
        for (auto i = TREE.begin(); i != TREE.end(); i++)
            printf("%d -> %d (%d)\n", i->first, get(i->first), size(i->first));
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        string s, e; cin >> s >> e;

        disjoint_set<int> S, E;
        for (int i = 0; i < n; i++) { S.add(i); E.add(i); }
        for (int i = 0; i < n - k; i++) { S.unite(i, i+k); E.unite(i, i+k); }
        for (int i = 0; i < n - k - 1; i++) { S.unite(i, i+k+1); E.unite(i, i+k+1); }

        vector<string> SS(n), SE(n);
        for (int i = 0; i < n; i++) {
            SS[S.get(i)] += s[i];
            SE[E.get(i)] += e[i];
        }

        bool br = false;
        for (int i = 0; i < n; i++) {
            sort(SS[i].begin(), SS[i].end());
            sort(SE[i].begin(), SE[i].end());

            if (SS[i] != SE[i]) {
                br = true; break;
            }
        }

        cout << (br ? "NO" : "YES") << '\n';
    }
}
