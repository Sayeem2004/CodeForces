#include <bits/stdc++.h>
using namespace std;

#define itos(x) to_string(x)
#define stoi(x) stoi(x)
#define ctoi(x) (x-'0')
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;
const ld pi = acos((ld)-1);
const ld e = exp(1);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  vector<vector<int>> total(26);
	for (int i = 0; i < n; i++) total[s[i]-'a'].push_back(i+1);
	int m; cin >> m; while (m--) {
		string t; cin >> t;
		vector<int> c(26);
		for (auto &x : t) c[x-'a']++;
		int ans = -1;
		for (int j = 0; j < 26; j++) {
      if (c[j] > 0) {
			  ans = max(ans, total[j][c[j]-1]);
      }
    }
		cout << ans << "\n";
	}
}
