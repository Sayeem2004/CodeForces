#include <bits/stdc++.h>
using namespace std;

#define itos(x) to_string(x)
#define stoi(x) stoi(x)
#define ctoi(x) (x-'0')
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
  const long double biglog = log(1e18);
  int n; cin >> n;
  vector<ll> v;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }
  sort(all(v));
  ll ans = 1e18;
  for (ll b = 0; (b == 0 ? true : n <= floor(biglog/log(b))); b++) {
    ll curr = 0;
    ll prod = 1;
    for (int i = 0; i < n; i++) {
      curr += abs(v[i]-prod);
      prod *= b;
    }
    ans = min(curr,ans);
  }
  cout << ans << '\n'; return 0;
}
