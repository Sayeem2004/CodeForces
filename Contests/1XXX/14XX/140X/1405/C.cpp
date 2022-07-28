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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int zero = 0, one = 0;
    bool check = true;
    for (int i = 0; i < k; i++) {
      int temp = -1;
      for (int j = i; j < n; j+=k) {
        if (s[j] != '?') {
          if (temp != -1 && s[j]-'0' != temp) {
            check = false; break;
          }
          temp = s[j]-'0';
        }
      }
      if (temp == 0) zero++;
      else if (temp == 1) one++;
    }
    if (max(zero, one) > k/2) check = false;
    if (check) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
}
