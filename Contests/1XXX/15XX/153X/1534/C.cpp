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

template<class T> struct mod_cache {
    T MOD = 1e9+7; // Variables & Helpers

    mod_cache() { } // Constructors
    mod_cache(T m) { MOD = m; }

    T add(T a, T b) { return (a + b) % MOD; } // Operations
    T sub(T a, T b) { return ((a - b) % MOD + MOD) % MOD; }
    T mul(T a, T b) { return (a * b) % MOD; }
    T div(T a, T b) { return (a * inv(b)) % MOD; }

    T gcd(T a, T b) { return (b == 0 ? a : gcd(b, a % b)); } // Extended Operations
    T inv(T x) { return (x == 1 ? 1 : (MOD - MOD / x) * inv(MOD % x) % MOD); }
    T pow(T x, T y) { return (y == 0 ? 1 :
        (y % 2 ? x * pow(x, y - 1) % MOD : pow(x * x % MOD, y / 2))); }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> A(n), B(n);
        for (long long &a : A) cin >> a;
        for (long long &b : B) cin >> b;

        disjoint_set<long long> DS;
        for (long long i = 1; i <= n; i++) DS.add(i);
        for (int i = 0; i < n; i++) DS.unite(A[i], B[i]);

        set<long long> S;
        for (long long i = 1; i <= n; i++) S.insert(DS.get(i));

        mod_cache<long long> MC;
        cout << MC.pow(2, S.size()) << "\n";
    }
}
