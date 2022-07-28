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
  ll n, m, a; cin >> n >> m >> a;
  ll c = n/a, c2 = m/a;
  if (c*a != n && c2*a != m) {
    cout << (c+1)*(c2+1) << "\n";
    return 0;
  }
  if (c*a != n) {
    cout << (c+1)*c2 << "\n";
    return 0;
  }
  if (c2*a != m) {
    cout << c*(c2+1) << "\n";
    return 0;
  }
  cout << c*c2 << "\n";
  return 0;
}
