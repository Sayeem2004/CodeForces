#include <bits/stdc++.h>
using namespace std;

template<class T> struct disjoint_set {
    // Variable declarations
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

    long long MX = 200005;
    disjoint_set<long long> DS;
    for (int i = 0; i < MX; i++) DS.add(i);

    long long n; cin >> n;
    vector<pair<long long, long long>> P(MX);
    for (int i = 0; i < n; i++) {
        cin >> P[i].first;
        P[i].second = i;
    }
    sort(P.begin(), P.begin() + n, greater<pair<long long, long long>>());

    long long curr = 1;
    vector<long long> ANS(MX), MARK(MX);
    for (int i = 0; i < n; i++) {
        long long pos = P[i].second, val = P[i].first;
        MARK[pos] = 1;

        if (pos > 0 && MARK[pos - 1]) DS.unite(pos, pos - 1);
		if (pos < n - 1 && MARK[pos + 1]) DS.unite(pos, pos + 1);

        long long sz = DS.size(pos);
		while (curr <= sz) ANS[curr++] = val;
    }

    for (int i = 1; i <= n; i++) cout << ANS[i] << " \n"[i == n];
}
