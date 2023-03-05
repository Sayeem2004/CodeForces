#include <bits/stdc++.h>
using namespace std;

string increment(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '9') s[i] = '0';
        else s[i]++;
    }
    return s;
}

string shift(string s) {
    string res = "";
    for (int i = 1; i < s.size(); i++) res += s[i];
    res += s[0];
    return res;
}

string min(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) return a;
        if (a[i] > b[i]) return b;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string s; cin >> s;

    vector<string> V(10); V[0] = s;
    for (int i = 1; i < 10; i++) {
        V[i] = increment(V[i - 1]);
    }

    string ans = V[0];
    for (int i = 0; i < 10; i++) {
        for (int q = 0; q < n; q++) {
            ans = min(ans, V[i]);
            V[i] = shift(V[i]);
        }
    }

    cout << ans << "\n";
}
