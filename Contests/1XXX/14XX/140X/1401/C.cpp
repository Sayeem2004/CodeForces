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
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v, v2;
    int min = pow(10,9);
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (x < min) {
        min = x;
      }
      v.pb(x);
      v2.pb(x);
    }
    sort(all(v2));
    vector<int> check;
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] != v2[i]) {
        count++;
        check.pb(v[i]);
      }
    }
    if (count == 0) {
      cout << "YES" << "\n";
      continue;
    }
    bool c = false;
    for (auto x : check) {
      if (x%min != 0) {
        cout << "NO" << "\n";
        c = true;
        break;
      }
    }
    if (c) {
      continue;
    }
    cout << "YES" << "\n";
  }
}
