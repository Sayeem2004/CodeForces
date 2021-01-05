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
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<int> v;
    int k;
    cin >> k;
    for (int q = 0; q < k; q++) {
      int x;
      cin >> x;
      v.pb(x);
    }
    if (v[0] + v[1] <= v[k-1]) {
      cout << 1 << " " << 2 << " " << k << "\n";
      continue;
    }
    if (v[k-1] - v[k-2] >= v[0]) {
      cout << 1 << " " << k-1 << " " << k << "\n";
      continue;
    }
    cout << -1 << "\n";
  }
}
