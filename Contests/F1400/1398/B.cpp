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
    string s;
    cin >> s;
    int c = 0;
    int check = 0;
    vector<int> scores;
    for (auto x : s) {
      if (x == '0') {
        if (c > 0) {
          scores.pb(c);
          c = 0;
        }
        check++;
      } else {
        c++;
        check++;
      }
      if (check == sz(s)) {
        scores.pb(c);
      }
    }
    int a = 0, b = 0;
    while (sz(scores) > 0) {
      int c = *max_element(all(scores));
      a += c;
      scores.erase(find(all(scores),c));
      if (sz(scores) == 0) {
        break;
      }
      int d = *max_element(all(scores));
      b += d;
      scores.erase(find(all(scores),d));
    }
    cout << a << "\n";
  }
}
