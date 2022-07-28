#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        map<char,int> T;
        for (auto x : s)
            T[x]++;
        set<char> A, B;
        for (auto x : T) {
            if (x.second >= 2) A.insert(x.first);
            else B.insert(x.first);
        }
        cout << A.size() + B.size()/2 << "\n";
    }
}
