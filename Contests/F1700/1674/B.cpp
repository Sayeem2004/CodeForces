#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    map<string, int> M;
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        for (int q = 0; q < 26; q++) {
            if (i == q) continue;
            char a = char(97+i);
            char b = char(97+q);
            string s = "";
            s += a;
            s += b;
            M[s] = cnt;
            cnt++;
        }
    }
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        cout << M[s]+1 << "\n";
    }
}
