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
  vector<ld> v(n); vector<bool> t(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int x = floor(v[i]);
    if (x == v[i]) t[i] = true;
    v[i] = x;
    sum += v[i];
  }
  if (sum > 0) {
    for (int i = 0; i < sum; i++) {
      if (!t[i]) v[i]--;
      if (t[i]) sum++;
    }
  } else {
    sum = abs(sum);
    for (int i = 0; i < sum; i++) {
      if (!t[i]) v[i]++;
      if (t[i]) sum++;
    }
  }
  for (auto x : v) cout << x << "\n";
}
