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
  string s, t; cin >> s >> t;
  int n = sz(t);
  int par = 0;
  for (auto x : t) {
    if (x == '1') {
      par++;
    }
  }
  par = par%2;
  int ans = 0, temp = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') temp++;
  }
  if (temp%2 == par) ans++;
  for (int i = 1; i <= sz(s)-n; i++) {
    if (s[i+n-1] == '1') temp++;
    if (s[i-1] == '1') temp--;
    if (temp%2 == par) ans++;
  }
  cout << ans << "\n";
}
