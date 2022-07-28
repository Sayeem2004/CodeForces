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
  int n, m; cin >> n >> m;
  vector<bool> v(m);
  int count = 0;
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    for (int q = a; q <= b; q++) {
      if (v[q-1] == true) {
        continue;
      } else {
        v[q-1] = true;
        count++;
      }
    }
  }
  cout << m-count << "\n";
  for (int i = 0; i < m; i++) if (!v[i]) cout << i+1 << " ";
  cout << "\n";
}
