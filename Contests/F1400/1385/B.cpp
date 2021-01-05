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
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < 2*n; i++) {
      int x; cin >> x;
      if (find(all(v1),x) != v1.end()) {
        v2.pb(x);
      } else {
        v1.pb(x);
      }
    }
    for (auto x : v1) {
      cout << x << " ";
    }
    cout << "\n";
  }
}
