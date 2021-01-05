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
    int a, b; cin >> a >> b;
    if (n == 2) {
      cout << a << " " << b << "\n"; continue;
    }
    int dif, bet;
    for (int i = n-1; i > 0; i--) {
      if ((b-a)%i == 0) {
        dif = (b-a)/i;
        bet = i; break;
      }
    }
    int start = a, count = n-bet-1;
    for (int i = 1; i <= count; i++) {
      if (start-dif > 0) {
        start -= dif;
      } else {
        break;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << start+dif*i << " ";
    }
    cout << "\n";
  }
}
