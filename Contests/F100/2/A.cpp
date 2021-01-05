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

#define ll long long
#define ld long double
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ld pi = acos((ld)-1);
const ld e = exp(1);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n; cin >>n;
  map<string,int> mx, check;
  vector<pair<string,int>> v;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    int x; cin >> x;
    mx[s] += x;
    v.pb(make_pair(s,x));
  }
  int mxs = -1000000;
  for (auto x : mx) {
    if (x.second > mxs) {
      mxs = x.second;
    }
  }
  string ans = "";
  for (auto x : mx) {
    if (x.second == mxs) {
      check[x.first] = 0;
      ans = x.first;
    }
  }
  if (mx.size() == 1) {
    cout << ans << "\n";
    return 0;
  }
  for (auto x : v) {
    if (check.find(x.first) != check.end()) {
      check[x.first] += x.second;
      if (check[x.first] >= mxs) {
        cout << x.first << "\n";
        break;
      }
    }
  }
}
