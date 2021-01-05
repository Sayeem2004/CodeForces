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

int digitadd(ll k) {
  string s = itos(k);
  ll mn = 10;
  ll mx = 0;
  for (auto x : s) {
    if (ctoi(x) > mx) {
      mx = ctoi(x);
    }
    if (ctoi(x) < mn) {
      mn = ctoi(x);
    }
  }
  return mn*mx;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t; cin >> t;
  while (t--) {
    ll n, k; cin >> n >> k;
    k--;
    while (k--) {
      ll l = digitadd(n);
      if (l == 0) break;
      n += l;
    }
    cout << n << "\n";
  }
}
