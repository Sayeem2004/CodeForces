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

    long long n; cin >> n;
    disjoint_set<long long> DS;
    for (int i = 0; i < n; i++) DS.add(i+1);

    long long k; cin >> k;
    for (int i = 0; i < k; i++) {
        long long a, b; cin >> a >> b;
        DS.unite(a, b);
    }

    long long m; cin >> m;
    set<long long> B;
    for (int i = 0; i < m; i++) {
        long long a, b; cin >> a >> b;
        if (DS.same(a, b)) B.insert(DS.get(a));
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        long long lead = DS.get(i);
        if (B.count(lead)) continue;
        ans = max(ans, (long long) DS.size(lead));
    }

    cout << ans << "\n";
}
