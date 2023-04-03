#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        string R1, R2; cin >> R1 >> R2;

        bool br = false;
        for (int i = 0; i < N; i++) {
            if (R1[i] == 'R' && R2[i] == 'R') continue;
            if (R1[i] == 'G' && R2[i] == 'G') continue;
            if (R1[i] == 'B' && R2[i] == 'B') continue;
            if (R1[i] == 'G' && R2[i] == 'B') continue;
            if (R1[i] == 'B' && R2[i] == 'G') continue;
            br = true; break;
        }

        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
