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
  int t; cin >> t; while (t--) {
    int n; cin >> n;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (x == 0) zero++;
      if (x == 1) one++;
    }
    if (zero >= one) {
      cout << zero << "\n";
      for (int i = 0; i < zero; i++) {
        cout << 0 << " ";
      }
      cout << "\n";
    } else {
      if (one > 1) one -= one%2;
      cout << one << "\n";
      for (int i = 0; i < one; i++) {
        cout << 1 << " ";
      }
      cout << "\n";
    }
  }
}
