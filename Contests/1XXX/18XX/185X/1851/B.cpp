#include <bits/stdc++.h>

template<typename T> struct disjoint_set {
    std::unordered_map<T, T> TREE; std::unordered_map<T, int> SIZE; // Variables
    disjoint_set(std::vector<T> V = {}) { for (T x : V) add(x); } // Constructors

    bool add(T x) { return TREE.count(x) ? 0 : (TREE[x] = x, SIZE[x] = 1); } // Mutators
    bool unite(T x, T y) { x = get(x), y = get(y); // Union by size
        if (x == y) return 0; if (SIZE[x] < SIZE[y]) std::swap(x, y);
        TREE[y] = x; SIZE[x] += SIZE[y]; return 1; }

    int size(T x) { return SIZE[get(x)]; } // Accessors
    bool same(T x, T y) { return get(x) == get(y); }
    T get(T x) { return TREE[x] == x ? x : TREE[x] = get(TREE[x]); }
    void print() { for (auto i = TREE.begin(); i != TREE.end(); i++)
        std::printf("%d -> {%d} (%d)\n", i->first, get(i->first), size(i->first)); }
};

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N; std::cin >> N;
        std::vector<std::pair<int, int>> V(N);
        disjoint_set<int> DS;

        for (int i = 0; i < N; i++) {
            std::cin >> V[i].first;
            V[i].second = i; DS.add(i);
        }

        int o = -1, e = -1;
        for (int i = 0; i < N; i++) {
            if (V[i].first % 2 == 0) {
                if (e == -1) e = i;
                else DS.unite(e, V[i].second);
            } else {
                if (o == -1) o = i;
                else DS.unite(o, V[i].second);
            }
        }

        std::sort(V.begin(), V.end());
        bool ok = true;
        for (int i = 0; i < N; i++) {
            if (DS.same(i, V[i].second)) continue;
            ok = false; break;
        }

        std::cout << (ok ? "YES" : "NO") << "\n";
    }
}
