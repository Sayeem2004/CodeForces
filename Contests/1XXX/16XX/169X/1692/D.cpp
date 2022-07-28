#include <bits/stdc++.h>
using namespace std;

bool check(int tm) {
    tm %= 1440;
    string s;
    if (tm == 0) s = "0000";
    else if (tm < 600) s = "0" + to_string(tm/60) + (tm % 60 == 0 ? "00" : (tm % 60 < 10 ? "0" + to_string(tm % 60) : to_string(tm % 60)));
    else s = to_string(tm/60) + (tm % 60 == 0 ? "00" : (tm % 60 < 10 ? "0" + to_string(tm % 60) : to_string(tm % 60)));
    for (int i = 0; i < s.size()/2; i++) {
        if (s[i] != s[s.size()-i-1])
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        string s; cin >> s;
        int x; cin >> x;
        int tm = stoi(s.substr(0, 2))*60 + stoi(s.substr(3, 2));
        int lcm = x * 1440 / __gcd(x, 1440);
        int ans = 0;
        for (int i = 0; i < lcm; i += x) {
            if (check(tm+i)) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}
