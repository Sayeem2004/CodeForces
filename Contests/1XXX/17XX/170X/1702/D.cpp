#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int p; cin >> p;
        vector<bool> V(s.size(), true);
        map<char, vector<int>> M;
        int sm = 0, mns = 26;
        for (int i = 0; i < s.size(); i++) {
            M[s[i]].push_back(i);
            sm += s[i]-'a'+1;
        }
        while (sm > p) {
            if (M['a'+mns-1].size() == 0) {
                mns--;
            } else {
                sm -= mns;
                V[M['a'+mns-1].back()] = false;
                M['a'+mns-1].pop_back();
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (V[i]) cout << s[i];
        }
        cout << "\n";
    }
}
