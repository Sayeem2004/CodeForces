#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        long long ans = 0, x = 0, y = 0;
        set<array<long long, 4>> S;
        for (int i = 0; i < s.size(); i++) {
            array<long long, 4> A;
            if (s[i] == 'N') {A = {x, y, x, y+1}; y++;}
            else if (s[i] == 'S') {A = {x, y-1, x, y}; y--;}
            else if (s[i] == 'E') {A = {x, y, x+1, y}; x++;}
            else {A = {x-1, y, x, y}; x--;}
            if (S.find(A) == S.end()) ans += 5;
            else ans++;
            S.insert(A);
        }
        cout << ans << "\n";
    }
}
