#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        string S; cin >> S;
        set<char> ST;
        for (char c : S) ST.insert(c);

        if (ST.size() == 1) cout << -1 << "\n";
        else if (ST.size() == 2) {
            int cntF = 0;
            for (char c : S) if (c == *ST.begin()) cntF++;
            if (cntF == 2) cout << 4 << "\n";
            else cout << 6 << "\n";
        } else cout << 4 << "\n";
    }
}
