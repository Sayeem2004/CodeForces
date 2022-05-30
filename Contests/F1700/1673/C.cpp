#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

bool check(int a) {
	string s1 = to_string(a), s2 = to_string(a);
	reverse(s1.begin(), s1.end());
 	if (s1.compare(s2) == 0) return true;
	return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	vector<int> V(1, 0);
	for (int i = 1; i <= 40005; i++) {
		if (check(i)) {
			V.push_back(i);
		}
	}
	int n = V.size()-1, x = 40000;
	vector<vector<ll>> DP(n+1, vector<ll>(x+1, 0));
	for (int i = 1; i <= n; i++) {
		for (int q = 0; q <= x; q++) {
			if (q == 0) {
                DP[i][q] = 1;
            } else {
                ll a = (V[i] > q) ? 0 : DP[i][q-V[i]];
                ll b = (i == 1) ? 0 : DP[i-1][q];
                DP[i][q] = (a+b)%(1000000007);
            }
		}
	}
	int t; cin >> t; while (t--) {
		int a; cin >> a;
		cout << DP[n][a] << "\n";
	}
}
