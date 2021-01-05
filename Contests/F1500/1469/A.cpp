#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        if (s.length()%2 == 1) {
            cout << "NO" << "\n";
            continue;
        }
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (count < 0) break;
            if (s[i] == '(') count++;
            if (s[i] == ')') count--;
            if (s[i] == '?') {
                if (count == 1 && s[i+1] == ')') {
                    count++; continue;
                }
                if (count > 0) count--;
                else count++;
            }
        }
        if (count == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}
