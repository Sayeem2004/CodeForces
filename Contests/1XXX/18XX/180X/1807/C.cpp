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
        vector<array<int, 2>> F(26);

        for (int i = 0; i < N; i++) {
            F[S[i] - 'a'][i % 2]++;
        }

        bool br = false;
        for (int i = 0; i < 26; i++) {
            if (F[i][0] > 0 && F[i][1] > 0) {
                br = true; break;
            }
        }

        if (br) cout << "NO\n";
        else cout << "YES\n";
    }
}
