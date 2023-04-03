#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    string s; cin >> s;
    int x = 0, y = 0;
    set<pair<int, int>> S;
    S.insert({x, y});

    bool ok = true;
    vector<pair<int, int>> D = {{0, 0}, {1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for (char c : s) {
        int s = -1;
        if (c == 'L') { x--; s = 1; }
        if (c == 'R') { x++; s = 2; }
        if (c == 'D') { y--; s = 3; }
        if (c == 'U') { y++; s = 4; }

        for (int i = 0; i < 5; i++) {
            if (i == s) continue;
            if (S.count({x + D[i].first, y + D[i].second})) ok = false;
        }
        if (!ok) break;
        else S.insert({x, y});
    }

    cout << (ok ? "OK" : "BUG") << "\n";
}
