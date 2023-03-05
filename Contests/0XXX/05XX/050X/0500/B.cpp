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
    int n; cin >> n;
    vector<int> V(n);
    for (int &v : V) cin >> v;

    disjoint_set<int> DS;
    for (int i = 0; i < n; i++) DS.add(i);
    for (int i = 0; i < n; i++) {
        for (int q = 0; q < n; q++) {
            char c; cin >> c;
            if (c == '1') DS.unite(i, q);
        }
    }

    vector<int> I(n);
    vector<vector<int>> S(n);
    for (int i = 0; i < n; i++) {
        S[DS.get(i)].push_back(V[i]);
    }
    for (int i = 0; i < n; i++) {
        sort(S[i].begin(), S[i].end());
    }

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        int p = DS.get(i);
        A[i] = S[p][I[p]++];
    }

    for (int a : A) cout << a << " ";
    cout << "\n";
}
