#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;

        int cnt = 0;
        for (int i = 0; i < N; i++) {
            char c; cin >> c;
            if (c == '1') cnt++; if (i == 0) continue;
            if (c == '1') { cout << (cnt % 2 == 0 ? "-" : "+");}
            else cout << "+";
        }
        cout << "\n";
    }
}
