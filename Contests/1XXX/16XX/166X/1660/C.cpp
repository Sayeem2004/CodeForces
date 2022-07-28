#include <bits/stdc++.h>
using namespace std;

bool check(map<char, long long> &M, string &s) {
    for (char c : s) {
        if (M[c] % 2 == 0) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        map<char, long long> M;
        long long ans = 0;
        for (char c : s) {
            if (M[c] == 1) {
                ans += 2;
                M.clear();
            } else M[c]++;
        }
        cout << s.size() - ans << "\n";
    }
}
