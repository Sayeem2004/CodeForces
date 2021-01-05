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

bool prime(int n) {
  if (n < 2) {
    return false;
  }
  if (n == 2 || n == 3 || n == 5 || n == 7) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }
  for (int x = 3; x*x <= n; x += 2) {
    if (n % x == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n % 2 == 0) {
      cout << n/2 << " " << n/2 << "\n";
      continue;
    }
    if (prime(n)) {
      cout << 1 << " " << n-1 << "\n";
      continue;
    }
    for (int i = 3; i*i <= n; i+=2) {
      if (n % i == 0) {
        cout << n/i << " " << n-n/i << "\n";
        break;
      }
    }
  }
}
