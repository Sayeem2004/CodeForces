#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int solve(vector<string> V, char m, map<char,int> M) {
    int mx = 0, r = 0;
    for (auto x : M) {
        if (x.first == m) {
            mx = x.second;
        } else {
            r += x.second;
        }
    }
    vector<pair<int,string>> S(V.size());
    for (int i = 0; i < V.size(); i++) {
        int cnt = 0, rest = 0;
        for (auto y : V[i]) {
            if (y == m) cnt++;
            else rest++;
        }
        S[i] = {cnt-rest, V[i]};
    }
    sort(S.begin(), S.end());
    int pos = 0;
    while (r >= mx && pos < V.size()) {
        string temp = S[pos].second;
        int rem = (temp.size()-S[pos].first)/2;
        r -= rem;
        mx -= (rem+S[pos].first);
        pos++;
    }
    return V.size()-pos;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<string> V(n);
        map<char,int> M;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            V[i] = s;
            for (auto x : s)
                M[x]++;
        }
        int ans = 0;
        for (auto x : M) {
            ans = max(ans, solve(V, x.first, M));
        }
        cout << ans << "\n";
    }
}
