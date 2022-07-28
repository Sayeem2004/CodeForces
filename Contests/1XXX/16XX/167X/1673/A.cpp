#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--) {
		string s; cin >> s;
		int ans = 0;
		if (s.size() % 2 == 0) {
			for (int i = 0; i < s.size(); i++) {
				ans += s[i] - 'a' + 1;
			}
			cout << "Alice " << ans << "\n";
		} else {
			if (s[0] - 'a' > s[s.size()-1] - 'a') {
				for (int i = 0; i < s.size()-1; i++) {
					ans += s[i] - 'a' + 1;
				}
				ans -= s[s.size()-1] - 'a' + 1;
			} else {
				for (int i = 1; i < s.size(); i++) {
					ans += s[i] - 'a' + 1;
				}
				ans -= s[0] - 'a' + 1;
			}
			if (ans < 0) {
				cout << "Bob " << ans*-1 << "\n";
			} else {
				cout << "Alice " << ans << "\n";
			}
		}
	}
}
