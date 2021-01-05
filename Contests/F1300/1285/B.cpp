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
  int t; cin >> t; while (t--) {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      v.pb(x);
    }
    ll pre = 0;
    bool p = false;
    for (int i = 0; i < n; i++){
      pre += v[i];
      if (pre <= 0) {
        cout << "NO" << "\n";
        p = true; break;
      }
    }
    if (p) continue;
    ll suf = 0;
    bool s = false;
    for (int i = n-1; i >= 0; i--){
      suf += v[i];
      if (suf <= 0) {
        cout << "NO" << "\n";
        s = true; break;
      }
    }
    if (s) continue;
    cout << "YES" << "\n";
  }
}
