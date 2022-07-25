#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<string> V(n);
        set<string> S;
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            S.insert(V[i]);
        }
        string ret = "";
        for (int i = 0; i < n; i++) {
            bool br = false;
            for (int q = 1; q < V[i].size(); q++) {
                string str1 = V[i].substr(0, q);
                string str2 = V[i].substr(q);
                if (S.find(str1) != S.end() && S.find(str2) != S.end()) {
                    br = true; break;
                }
            }
            if (br) ret += '1';
            else ret += '0';
        }
        cout << ret << "\n";
    }
}
