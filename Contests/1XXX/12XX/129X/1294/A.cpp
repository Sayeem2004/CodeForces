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
  int t; cin >> t;
  while (t--) {
    int x, y, z; cin >> x >> y >> z;
    int mx = max(max(x,y),max(y,z));
    int sum = 3*mx - (x+y+z);
    int k; cin >> k;
    if (sum > k) {
      cout << "NO" << "\n";
      continue;
    }
    if ((k-sum)%3 == 0) {
      cout << "YES" << "\n";
      continue;
    }
    cout << "NO" << "\n";
  }
}
