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
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int x0, x1, x2; cin >> x0 >> x1 >> x2;
    int y0, y1, y2; cin >> y0 >> y1 >> y2;
    int mn, sum = 0;
    mn = min(x0, y2);
	  x0 -= mn;
	  y2 -= mn;
	  mn = min(x1, y0);
	  x1 -= mn;
	  y0 -= mn;
	  mn = min(x2, y1);
	  x2 -= mn;
	  y1 -= mn;
	  sum += 2 * mn;
	  sum -= 2 * min(x1, y2);
	  cout << sum << endl;
  }
}
