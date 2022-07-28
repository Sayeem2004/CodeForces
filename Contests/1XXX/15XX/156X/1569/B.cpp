#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int c1 = 0, c2 = 0;
        map<int,int> M;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') c1++;
            else {
                c2++;
                M[i] = M.size();
            }
        }
        if (c2 == 1 || c2 == 2) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                for (int q = 0; q < n; q++) {
                    if (i == q) {
                        cout << "X";
                    } else if (s[i] == '1' || s[q] == '1') {
                        cout << "=";
                    } else if (s[i] == '2' && M[q] == (M[i]+1)%c2) {
                        cout << "+";
                    } else if (s[i] == '2' && M[q] == (M[i]-1+c2)%c2) {
                        cout << "-";
                    } else {
                        cout << "=";
                    }
                }
                cout << "\n";
            }
        }
    }
}
