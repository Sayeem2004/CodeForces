#include <bits/stdc++.h>
#define ll long long
#define mod(x) (x % 1000000007)

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int w;
  cin >> w;
  if (w % 2 == 0 && w > 2) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}
