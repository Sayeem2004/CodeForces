#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n; while (n--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (i%2 == 0) {
                if (s[i] == 'a') s[i] = 'b';
                else s[i] = 'a';
            } else {
                if (s[i] == 'z') s[i] = 'y';
                else s[i] = 'z';
            }
        }
        cout << s << "\n";
    }
}
