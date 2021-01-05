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

const string T = "abacaba";

int count(const string& s) {
  int cnt = 0;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s.substr(i, T.size()) == T) ++cnt;
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t; cin >> t; while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    bool F = false;
    for (int i = 0; i + T.size() <= n; ++i) {
      string ss = s;
      bool ok = true;
      for (int j = 0; j < T.size(); j++) {
        if (ss[i + j] != '?' && ss[i + j] != T[j]) {
          ok = false;
          break;
        }
        ss[i + j] = T[j];
      }
      if (ok && count(ss) == 1) {
        for (int j = 0; j < n; j++) {
          if (ss[j] == '?') ss[j] = 'd';
        }
        F = true;
        cout << "Yes" << "\n";
        cout << ss << "\n";
        break;
      }
    }
    if (!F) cout << "No" << "\n";
  }
}
