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
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a, b;
    ll min1 = inf, min2 = inf;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      a.pb(x);
      if (x < min1) {
        min1 = x;
      }
    }
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      b.pb(x);
      if (x < min2) {
        min2 = x;
      }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      ans += max((a[i]-min1),(b[i]-min2));
    }
    cout << ans << "\n";
  }
}
