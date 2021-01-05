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

// Sum of Digits
int digsum(ll x) {
  int ans = 0;
  while (x > 0) {
    ans += x%10; x /= 10;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t; cin >> t; while (t--) {
    ll n, m; cin >> n >> m;
    if (digsum(n) <= m) {
      cout << 0 << "\n"; continue;
    }
    ll ans = 0, div = 1;
    for (int i = 0; i <= 18; i++) {
      ll md = (n/div)%10;
      n += div*((10-md)%10);
      ans += div*((10-md)%10);
      if (digsum(n) <= m) break;
      div *= 10;
    }
    cout << ans << "\n";
  }
}
