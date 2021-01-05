#include <bits/stdc++.h>
using namespace std;

#define itos(x) to_string(x)
#define stoi(x) stoi(x)
#define ctoi(x) (x-'0')
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
  if (sz(s) != sz(t)) {
    cout << "No" << "\n";
    return 0;
  }
  string v = "aeiou";
  for (int i = 0; i < sz(s); i++) {
    bool a = find(all(v),s[i]) != v.end();
    bool b = find(all(v),t[i]) != v.end();
    if (a == b) {
      continue;
    } else {
      cout << "No" << "\n";
      return 0;
    }
  }
  cout << "Yes" << "\n";
  return 0;
}
