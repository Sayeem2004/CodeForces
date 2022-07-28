#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map<char, int> M;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        M[s[0]]++;
    }
    int ans = 0;
    for (auto x : M) {
        int t = x.second;
        int c1 = (t/2);
        int c2 = t-(c1);
        ans += c1*(c1-1)/2 + c2*(c2-1)/2;
    }
    cout << ans << "\n";
}
