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

// Binary Exponentiation
ll modpow(int x, int n) {
  if (n == 0) return 1;
  ll u = modpow(x, n/2);
  u = (u * u);
  if (n % 2 == 1) u = (u * x);
  return u;

}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n, m; cin >> n >> m;
  vector<vector<int> > v(n,vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int q = 0; q < m; q++) cin >> v[i][q];
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    int zero = 0, one = 0;
    for (int q = 0; q < m; q++) {
      if (v[i][q] == 1) one++;
      else zero++;
    }
    ans += (modpow(2,one)-1);
    ans += (modpow(2,zero)-1);
  }
  for (int i = 0; i < m; i++) {
    int zero = 0, one = 0;
    for (int q = 0; q < n; q++) {
      if (v[q][i] == 1) one++;
      else zero++;
    }
    ans += (modpow(2,one)-1);
    ans += (modpow(2,zero)-1);
  }
  cout << ans-(n*m) << "\n"; return 0;
}
