#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    double r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;

    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << ceil(d / (2 * r)) << "\n";
}
