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
  int n, m; cin >> n >> m;
  int odd = 0, even = 0, odd2 = 0, even2 = 0;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    if (t%2 == 0) even++;
    if (t%2 == 1) odd++;
  }
  for (int i = 0; i <m; i++) {
    int t; cin >> t;
    if (t%2 == 0) even2++;
    if (t%2 == 1) odd2++;
  }
  cout << min(even,odd2)+min(odd,even2) << "\n";
}
