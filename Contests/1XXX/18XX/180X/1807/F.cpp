#include <bits/stdc++.h>
using namespace std;

bool hit(int x, int y, string d, int gx, int gy) {
    if (x == gx && y == gy) return true;
    int dx = (d[1] == 'L' ? -1 : 1);
    int dy = (d[0] == 'D' ? 1 : -1);

    if (dx == -1 && gx > x) return false;
    if (dx == 1 && gx < x) return false;
    if (dy == -1 && gy > y) return false;
    if (dy == 1 && gy < y) return false;

    if ((gx - x) / dx == (gy - y) / dy) return true;
    return false;
}

string update(int &x, int &y, int n, int m, string d, set<string> &V) {
    int dx = (d[1] == 'L' ? -1 : 1);
    int dy = (d[0] == 'D' ? 1 : -1);

    int xs, ys, mn;
    if (dx == -1) xs = x - 1;
    else xs = m - x;
    if (dy == -1) ys = y - 1;
    else ys = n - y;
    mn = min(xs, ys);

    x += dx * mn;
    y += dy * mn;

    string ret = d;
    if (x == 1) ret[1] = 'R';
    if (x == m) ret[1] = 'L';
    if (y == 1) ret[0] = 'D';
    if (y == n) ret[0] = 'U';

    string check = to_string(x) + " " + to_string(y) + " " + ret;
    if (V.count(check)) return "XX";
    V.insert(check);
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, M; cin >> N >> M;
        int X, Y; cin >> Y >> X;
        int GX, GY; cin >> GY >> GX;
        string D; cin >> D;

        set<string> V;
        for (int i = 0; i < 100000000; i++) {
            if (hit(X, Y, D, GX, GY)) {
                cout << i << "\n"; break;
            }

            D = update(X, Y, N, M, D, V);
            if (D == "XX") {
                cout << -1 << "\n"; break;
            }
        }
    }
}
