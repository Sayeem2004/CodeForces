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
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;
const ld pi = acos((ld)-1);
const ld e = exp(1);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  ll n, m; cin >> n >> m;
  ll a = 1, b = m;
  while (b > 0){
    ll c = min(a, b);
    b -= c;
    a++;
  }
  ll ans = n;
  if (a > 1) ans = n-a;
  cout << max(0ll,n-m*2) << ' ' << ans << "\n";
}
