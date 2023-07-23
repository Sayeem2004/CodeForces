#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N; N /= 2;
        int X1, Y1; cin >> X1 >> Y1;
        int X2, Y2; cin >> X2 >> Y2;

        int difX1 = (X1 <= N ? N - X1 : X1 - N - 1);
        int difY1 = (Y1 <= N ? N - Y1 : Y1 - N - 1);
        int difX2 = (X2 <= N ? N - X2 : X2 - N - 1);
        int difY2 = (Y2 <= N ? N - Y2 : Y2 - N - 1);

        int mx1 = max(difX1, difY1);
        int mx2 = max(difX2, difY2);

        cout << abs(mx1 - mx2) << "\n";
    }
}
