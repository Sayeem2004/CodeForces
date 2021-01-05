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
    string s; cin >> s;
    int dif; cin >> dif;
    int n = sz(s);
    string ans(n, '1');
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        if (i-dif >= 0) {
          ans[i-dif] = '0';
        }
        if (i+dif < n) {
          ans[i+dif] = '0';
        }
      }
    }
    string ch = ans;
    for (int i = 0; i < n; i++) {
      if (i-dif >= 0 && ans[i-dif] == '1' || i+dif < n && ans[i+dif] == '1') {
        ch[i] = '1';
      } else {
        ch[i] = '0';
      }
    }
    if (ch == s) {
      cout << ans << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
