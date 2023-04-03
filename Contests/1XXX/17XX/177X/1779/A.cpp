#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        string S; cin >> S;

        int cntLR = 0, cntRL = 0, posLR = -1;
        for (int i = 1; i < N; i++) {
            if (S[i - 1] == 'L' && S[i] == 'R') { cntLR++; posLR = i; }
            if (S[i - 1] == 'R' && S[i] == 'L') cntRL++;
        }

        if (cntLR == 0 && cntRL == 0) cout << -1 << "\n";
        else if (cntRL > 0) cout << 0 << "\n";
        else cout << posLR << "\n";
    }
}
