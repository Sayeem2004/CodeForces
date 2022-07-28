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
    string s, t; cin >> s >> t;
    int count = 0;
    vector<int> pos;
    set<int> letter;
    for (int i = 0; i < n; i++) {
      if (s[i] != t[i]) {
        count++;
        pos.pb(i);
        letter.insert(s[i]);
        letter.insert(t[i]);
      }
    }
    if (count == 1 || count > 2) {
      cout << "No" << "\n"; continue;
    }
    if (letter.size() > 2) {
      cout << "No" << "\n"; continue;
    }
    if (s[pos[0]] == t[pos[1]]) {
      cout << "No" << "\n"; continue;
    }
    cout << "Yes" << "\n"; continue;
  }
}
