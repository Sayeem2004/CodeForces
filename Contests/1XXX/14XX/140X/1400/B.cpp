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
  ll i = 0, j = 0, cs = 0, in;
  int t; cin >> t;
  while (t--) {
    ll p, f; cin >> p >> f;
    ll cnts, cntw; cin >> cnts >> cntw;
    ll s, w; cin >> s >> w;
    ll ans = 0;
    for (i = 0; i <= cnts; i++) {
      if (i * s > p) {
        break;
      }
      ll l = 0, r = (cnts - i);
      while (l <= r) {
        ll mid = l + r >> 1;
        if (mid * s > f) {
          r = mid-1; continue;
        }
        ll xtra = min((p-(i*s))/w+(f-(mid*s))/w,cntw);
        ans = max(ans,xtra+i+mid);
        l = mid+1;
      }
    }
    for (i = 0; i <= cnts; i++) {
      if (i * s > p) {
        break;
      }
      ll l = 0, r = (cnts - i);
      while (l <= r) {
        ll mid = l + r >> 1;
        if (mid * s > f) {
          r = mid-1; continue;
        }
        ll xtra = min((p-(i*s))/w+(f-(mid*s))/w,cntw);
        ans = max(ans,xtra+i+mid);
        r = mid-1;
      }
    }
    cout << ans << endl;
  }
}
