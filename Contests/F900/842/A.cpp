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
  double a, b; cin >> a >> b;
  double c, d; cin >> c >> d;
  double e; cin >> e;
  if (a/d > e && b/c < e) {
    cout << "NO" << "\n"; return 0;
  }
  for (int i = c; i <= d; i++) {
    if (i*e >= a && i*e <= b) {
      cout << "YES" << "\n"; return 0;
    }
    if (i*e > b) {
      cout << "NO" << "\n"; return 0;
    }
  }
  cout << "NO" << "\n"; return 0;
}
