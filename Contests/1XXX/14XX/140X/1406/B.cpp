#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        sort(V.begin(), V.end());
        long long ans1 = V[n-1]*V[n-2]*V[n-3]*V[n-4]*V[n-5];
        long long ans2 = V[n-1]*V[n-2]*V[n-3]*V[n-4]*V[0];
        long long ans3 = V[n-1]*V[n-2]*V[n-3]*V[1]*V[0];
        long long ans4 = V[n-1]*V[n-2]*V[2]*V[1]*V[0];
        long long ans5 = V[n-1]*V[3]*V[2]*V[1]*V[0];
        long long ans6 = V[4]*V[3]*V[2]*V[1]*V[0];
        cout << max({ans1, ans2, ans3, ans4, ans5, ans6}) << "\n";
    }
}
