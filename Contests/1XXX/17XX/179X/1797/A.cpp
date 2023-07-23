#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, M; cin >> N >> M;
        int X1, Y1; cin >> X1 >> Y1;
        int X2, Y2; cin >> X2 >> Y2;

        int coordA = 4 - (X1 == 1 || X1 == N) - (Y1 == 1 || Y1 == M);
        int coordB = 4 - (X2 == 1 || X2 == N) - (Y2 == 1 || Y2 == M);

        cout << min(coordA, coordB) << '\n';
    }
}
