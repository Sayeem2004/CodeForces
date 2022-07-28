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
const ll mod = 1e9;
const ld pi = acos((ld)-1);
const ld e = exp(1);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int a, b; cin >> a >> b;
  int ans = a;
  int c, d; cin >> c >> d;
  int e, f; cin >> e >> f;
  for (int i = b; i >= 0; i--) {
    ans += i;
    if (i == d) ans = max(0,ans-c);
    if (i == f) ans = max(0,ans-e);
  }
  cout << ans << "\n";
}
