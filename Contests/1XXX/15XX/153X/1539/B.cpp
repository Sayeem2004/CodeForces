#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<ll> P(n+1);
    P[0] = 0;
    for (int i = 1; i <= n; i++)
        P[i] = P[i-1] + (s[i-1]-'a'+1);
    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        cout << P[b]-P[a-1] << "\n";
    }
}
