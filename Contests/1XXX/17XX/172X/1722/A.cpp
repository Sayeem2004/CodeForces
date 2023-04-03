#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        string NM = "Timur";
        sort(NM.begin(), NM.end());

        int N; cin >> N;
        string S; cin >> S;
        sort(S.begin(), S.end());

        if (NM == S) cout << "YES\n";
        else cout << "NO\n";
    }
}
