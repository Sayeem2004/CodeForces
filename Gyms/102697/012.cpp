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

ll modpow(int x, int n, int m) {
  if (n == 0) {
    return 1 % m;
  }
  ll u = modpow(x, n/2, m);
  u = (u * u) % m;
  if (n % 2 == 1) {
    u = (u * x) % m;
  }
  return u;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  cout << modpow(n,k,mod) << "\n";
}
