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
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      v.pb(x);
    }
    sort(rall(v));
    bool br = true;
    for (int i = 1; i <= n; i++) {
      if (i > v[i-1]) {
        cout << i-1 << "\n";
        br = false;
        break;
      }
    }
    if (br) {
      cout << n << "\n"; continue;
    }
  }
}
