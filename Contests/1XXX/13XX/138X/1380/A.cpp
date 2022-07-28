#include <bits/stdc++.h>
using namespace std;

#define lltos(x) to_string(x)
#define stoll(x) stoll(x)
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
  int t; cin >> t; while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    bool br = true;
	  for (int i = 0; i < n; i++) cin >> v[i];
	  for (int i = 1; i < n-1; i++) {
		  if (v[i] > v[i-1] && v[i] > v[i+1]) {
			  cout << "YES" << "\n";
			  cout << i << " " << i+1 << " " << i+2 << "\n";
			  br = false; break;
		  }
	  }
	  if (br) cout << "NO" << "\n";
  }
}
