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

// Sum of Digits
int digsum(string s) {
  int ans = 0;
  for (auto x : s) ans += ctoi(x);
  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  string n, m; cin >> n;
  if (n[0] == 1) {
    m = "9";
    for (int i = 2; i < sz(n); i++) m += "9";
  } else {
    m = lltos(ctoi(n[0])-1);
    for (int i = 1; i < sz(n); i++) m += "9";
  }
  n = lltos(stoll(n)-stoll(m));
  cout << digsum(n)+digsum(m) << "\n";
}
