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
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.pb(x);
  }
  sort(all(v));
  if (v[n-1] < v[n-2]+v[0]) {
    cout << "YES" << "\n";
    for (auto x : v) {
      cout << x << " ";
    }
    return 0;
  }
  if (v[n-1] < v[n-2]+v[n-3]) {
    swap(v[n-1],v[n-2]);
    cout << "YES" << "\n";
    for (auto x : v) {
      cout << x << " ";
    }
    return 0;
  }
  cout << "NO" << "\n";
}
