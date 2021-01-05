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
  string s; cin >> s;
  int n; cin >> n;
  set<char> v;
  if (sz(s) < n) {
    cout << "impossible" << "\n"; return 0;
  }
  for (auto x : s) v.insert(x);
  if (v.size() > n) cout << 0 << "\n";
  else cout << min(n,sz(s))-v.size() << "\n";
}
