#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        sort(V.begin(), V.end());
        long long ans = 0;
        for (int i = 1; i < n-1; i++) {
            ans = max(ans, V[i] - V[i-1] + V[n-1] - V[i-1]);
        }
        for(int i = 2; i < n; i++) {
		    ans = max(ans, V[i] - V[i-1] + V[i] - V[0]);
	    }
        cout << ans << "\n";
    }
}
