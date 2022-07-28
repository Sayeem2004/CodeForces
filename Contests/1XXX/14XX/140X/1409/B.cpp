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
    ll a, b; cin >> a >> b;
    ll x, y; cin >> x >> y;
    ll n; cin >> n;
    ll a2 = a, b2 = b, n2 = n;
    ll ans1, ans2;
    ll e = min(a-x,n);
    a -= e;
    n -= e;
    b -= min(b-y,n);
    ans1 = a*b;
    ll f = min(b2-y,n2);
    b2 -= f;
    n2 -= f;
    a2 -= min(a2-x,n2);
    ans2 = a2*b2;
    cout << min(ans1,ans2) << "\n";
  }
}
