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

        int pos = -1;
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            while (pos < N && S[pos] == c) pos++;

            int lst = N-1;
            while (lst >= 0 && S[lst] != c) lst--;

            if (lst <= pos) continue;
            else {
                cout << S.substr(0, pos+1) << c << S.substr(pos+1, lst-pos-1) << S.substr(lst+1) << '\n';
                break;
            }
        }
    }
}
