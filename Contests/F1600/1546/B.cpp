#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<map<char, int>> B(m), A(m);
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            for (int q = 0; q < m; q++)
                B[q][s[q]]++;
        }
        for (int i = 0; i < n-1; i++) {
            string s; cin >> s;
            for (int q = 0; q < m; q++)
                A[q][s[q]]++;
        }
        string ret = "";
        for (int i = 0; i < m; i++) {
            for (auto x : B[i]) {
                if (B[i][x.first] != A[i][x.first])
                    ret += x.first;
            }
        }
        cout << ret << endl;
    }
}
