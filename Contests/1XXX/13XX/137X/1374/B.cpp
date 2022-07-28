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

multiset<int> pfactor(int n) {
  multiset<int> f;
  while (n % 2 == 0) {
    f.insert(2);
    n /= 2;
  }
  for (int x = 3; x*x <= n; x += 2) {
    while (n%x == 0) {
      f.insert(x);
      n /= x;
    }
  }
  if (n > 1) {
    f.insert(n);
  }
  return f;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int  t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n == 1) {
      cout << "0" << "\n";
      continue;
    }
    if (n % 10 == 5) {
      cout <<  "-1" << "\n";
      continue;
    }
    multiset<int> x = pfactor(n);
    int c2 = 0, c3 = 0;
    int stop = false;
    for (auto c : x) {
      if (c != 2 && c != 3) {
        stop = true;
        break;
      }
      if (c == 2) {
        c2++;
      }
      if (c == 3) {
        c3++;
      }
    }
    if (stop || c2 > c3) {
      cout << "-1" << "\n";
    } else {
      cout << c3+(c3-c2) << "\n";
    }
  }
}
