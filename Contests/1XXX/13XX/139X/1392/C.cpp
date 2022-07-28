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
  ll t; cin >> t;
  for (ll i = 0; i < t; i++) {
    ll n; cin >> n;
    vector<int> v;
    for (ll q = 0; q < n; q++) {
      ll x; cin >> x;
      v.pb(x);
    }
    ll count = 0;
    for (ll g = 1; g < n; g++) {
      count += max(v[g-1]-v[g],0);
    }
    cout << count << "\n";
  }
}
