#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (s[0] == '9') {
            vector<char> ANS;
            bool carry = false;
            for (int i = n-1; i >= 0; i--) {
                if (i == n-1) {
                    int dif = int('1')-int(s[i])-carry;
                    carry = false;
                    if (dif < 0) {
                        dif += 10;
                        carry = true;
                    }
                    ANS.push_back(char(dif+int('0')));
                } else if (i == 0) {
                    ANS.push_back(char(9+int('0')-carry));
                } else {
                    int dif = int('8')-int(s[i])-carry;
                    carry = false;
                    if (dif < 0) {
                        dif += 10;
                        carry = true;
                    }
                    ANS.push_back(char(dif+int('0')));
                }
            }
            reverse(ANS.begin(), ANS.end());
            for (auto x : ANS) cout << x;
        } else {
            for (int i = 0; i < n; i++) {
                cout << char(int('9')-int(s[i])+int('0'));
            }
        }
        cout << "\n";
    }
}
