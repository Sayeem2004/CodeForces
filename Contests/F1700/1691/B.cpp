#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        map<int, vector<int>> M;
        for (int i = 0; i < n; i++) {
            int s; cin >> s;
            V[i] = s;
            M[s].push_back(i);
        }
        bool br = false;
        for (auto x : M) {
            if (x.second.size() == 1) {
                br = true; break;
            }
        }
        if (br) {
            cout << -1 << "\n";
            continue;
        }
        map<int, int> C;
        for (int i = 0; i < n; i++) {
            cout << M[V[i]][(C[V[i]]+1)%M[V[i]].size()]+1 << " ";
            C[V[i]]++;
        }
        cout << "\n";
    }
}
