#include <bits/stdc++.h>
using namespace std;

#define itos(x) to_string(x)
#define stoi(x) stoi(x)
#define ctoi(x) (x-'0')
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
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<char,int> m;
    for (int i = 0; i < n; i++) {
      string s; cin >> s;
      for (auto x : s) {
        m[x]++;
      }
    }
    bool br = false;
    for (auto x : m) {
      if (x.second%n != 0) {
        br = true;
        break;
      }
    }
    if (br) {
      cout << "NO" << "\n";
      continue;
    }
    cout << "YES" << "\n";
  }
}
