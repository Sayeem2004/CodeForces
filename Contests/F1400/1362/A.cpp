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

ll div2(ll n) {
    return (n & (~(n - 1)));
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t; cin >> t;
  while (t--) {
    ll x, y; cin >> x >> y;
    ll x2 = div2(x); ll x3 = x/x2;
    ll y2 = div2(y); ll y3 = y/y2;
    if (x3 != y3) {
      cout << -1 << "\n"; continue;
    }
    double x4 = log2(x2); double y4 = log2(y2);
    cout << ceil(abs(x4-y4)/3) << "\n";
  }
}
