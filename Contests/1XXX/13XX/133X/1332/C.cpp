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

    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        disjoint_set<int> DS;
        for (int i = 0; i < n; i++) DS.add(i);
        for (int i = 0; i < n; i++) {
            DS.unite(i, n - i - 1);
            if (i < n - k) DS.unite(i, i + k);
        }

        vector<string> S(n);
        for (int i = 0; i < n; i++) S[DS.get(i)] += s[i];

        int ans = n;
        for (int i = 0; i < n; i++) {
            if (S[i] == "") continue;
            vector<int> C(26);
            for (char c : S[i]) C[c - 'a']++;

            int mx = 0;
            for (int q = 0; q < 26; q++) mx = max(mx, C[q]);
            ans -= mx;
        }

        cout << ans << "\n";
    }
}
