#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

bool check(vector<int> V) {
    for (int i = 1; i < V.size(); i++) {
        if (V[i] != V[i-1]) return false;
    }
    return true;
}

void update(vector<int> *V) {
    int cnt = 1;
    for (int i = (*V).size()-1; i > 0; i--) {
        if ((*V)[i] == (*V)[i-1]) cnt++;
        else break;
    }
    for (int i = max(0, int((*V).size()-2*cnt)); i < int((*V).size()-cnt); i++) {
        (*V)[i] = (*V)[i+cnt];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int &x : V) cin >> x;
        int ans = 0;
        while (!check(V)) {
            update(&V);
            ans++;
        }
        cout << ans << "\n";
    }
}
