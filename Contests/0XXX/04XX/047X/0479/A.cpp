#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a, b, c; cin >> a >> b >> c;
    int mx = a*b*c;
    mx = max(mx, a*b+c);
    mx = max(mx, a*(b+c));
    mx = max(mx, a+b*c);
    mx = max(mx, (a+b)*c);
    mx = max(mx, a+b+c);
    cout << mx << "\n";
}