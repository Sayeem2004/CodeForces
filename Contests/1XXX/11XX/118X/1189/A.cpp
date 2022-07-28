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
  int n; cin >> n;
  string s; cin >> s;
  int one = 0, zero = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') one++;
    if (s[i] == '0') zero++;
  }
  if (n == 1) {
    cout << 1 << "\n" << s << "\n"; return 0;
  }
  if (one != zero) {
    cout << 1 << "\n" << s << "\n"; return 0;
  }
  cout << 2 << "\n" << s[0] << " " << s.substr(1,n-1);
}
