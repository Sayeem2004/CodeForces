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
  int t; cin >> t; while (t--) {
    int n, k; cin >> n >> k;
    int dif = abs(n-k);
    int ans = 0;
    ans += dif/5;
    dif -= (dif/5)*5;
    ans += dif/2;
    dif -= (dif/2)*2;
    ans += dif;
    cout << ans << "\n";
  }
}
