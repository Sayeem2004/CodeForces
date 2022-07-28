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
  int t; cin >> t; while (t--) {
    ll n, s, t; cin >> n >> s >> t;
    ll x = 0, y = 1000000000;
    if (s+t > n) {
      y = (s+t-n);
      s -= y; t -= y;
      y = n-y+1;
    }
    x = max(s,t)+1;
    cout << min(x,y) << "\n";
  }
}
