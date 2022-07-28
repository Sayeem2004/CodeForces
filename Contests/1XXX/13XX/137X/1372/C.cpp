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
  cout.tie(0);
  int t; cin >> t;
	while (t--) {
    vector<int> v(200001);
		int ch1 = 0, ch2 = 0;
		int n; cin >> n;
    int mx = 0, mn = n + 1;
		for (int i = 1; i <= n; i++) {
			cin >> v[i];
			if (v[i] != i) {
				ch1 = 1;
				mx = max(mx,i);
				mn = min(mn,i);
			} else {
				v[i] = -1;
			}
		}
		if (ch1 == 0) {
			cout << 0 << "\n"; continue;
		} else {
			for (int i = mn; i <= mx; i++) {
				if (v[i] == -1) {
					ch2 = 1;
				}
			}
			if (ch2 == 0) {
				cout << 1 << "\n"; continue;
			} else {
				cout << 2 << "\n"; continue;
			}
		}
	}
}
