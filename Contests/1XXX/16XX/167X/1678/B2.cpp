#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, mn = 0;
        char prev = ' ';
        for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i+1]) cnt++;
            else {
                if (prev != s[i]) mn++;
                prev = s[i];
            }
        }
        cout << cnt << " " << (mn == 0 ? 1 : mn) << "\n";
    }
}
