#include <bits/stdc++.h>
using namespace std;

bool find(long long a, long long b, string &s, vector<string> &V, vector<array<long long, 2>> &M) {
    long long mx = 0, id = -1, pos = -1;
    for (long long i = a; i <= b; i++) {
        for (long long q = 0; q < V.size(); q++) {
            if (i + V[q].size() > s.size() || i + V[q].size() <= b) continue;
            if (s.substr(i, V[q].size()) == V[q]) {
                if (i + V[q].size() > mx) {
                    mx = i + V[q].size();
                    id = q; pos = i;
                }
            }
        }
    }
    if (id == -1) return false;
    M.push_back({id, pos});
    if (mx == s.size()) return true;
    return find(max(pos + 1, b + 1), mx, s, V, M);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        long long n; cin >> n;
        vector<string> V(n);
        for (string &v : V) cin >> v;
        vector<array<long long, 2>> M;
        if (!find(0, 0, s, V, M)) cout << -1 << "\n";
        else {
            cout << M.size() << "\n";
            for (array<long long, 2> m : M)
                cout << m[0] + 1 << ' ' << m[1] + 1 << "\n";
        }
    }
}
