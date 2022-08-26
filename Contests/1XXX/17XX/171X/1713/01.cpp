#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n), S(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            S[i] = V[i];
        }
        sort(S.begin(), S.end());
        long long ans1 = V[0], ans2 = S[0];
        for (int i = 1; i < n; i++) {
            ans1 += max(V[i] - V[i-1], 0LL);
            ans2 += max(S[i] - S[i-1], 0LL);
        }
        cout << (ans1 <= ans2 ? "YES" : "NO") << "\n";
    }
}
