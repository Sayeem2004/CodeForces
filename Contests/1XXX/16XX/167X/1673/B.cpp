#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--) {
		string s; cin >> s;
		set<char> S;
		vector<vector<int>> P(s.size()+1, vector<int>(26, 0));
        for (int i = 1; i < P.size(); i++) {
            for (int q = 0; q < 26; q++) {
                P[i][q] += P[i-1][q] + (s[i-1]-'a' == q ? 1 : 0);
                S.insert(s[i-1]);
            }
        }
        bool br = false;
        for (int i = 0; i <= s.size()-S.size(); i++) {
            for (int q = 0; q < 26; q++) {
                if (P[i+S.size()][q] - P[i][q] > 1) {
                    br = true; break;
                }
            }
        }
        if (br) cout << "NO\n";
        else cout << "YES\n";
	}
}
