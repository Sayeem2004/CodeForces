#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string a, b; cin >> a >> b;
        map<char, int> M1, M2;
        for (auto x : a) M1[x]++;
        for (auto x : b) M2[x]++;
        bool br = false;
        for (auto x : M1) {
            if (M2[x.first] != 0) {
                br = true; break;
            }
        }
        if (br) cout << "YES\n";
        else cout << "NO\n";
    }
}
