#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a = 0, b = 0;
        vector<int> red(n), blue(n);
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            red[i] = int(c);
        }
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            blue[i] = int(c);
        }
        for (int i = 0; i < n; i++) {
            if (red[i] > blue[i]) a++;
            else if (blue[i] > red[i]) b++;
        }
        if (a == b) {
            cout << "EQUAL" << "\n";
        } else if (a > b) {
            cout << "RED" << "\n";
        } else {
            cout << "BLUE" << "\n";
        }
    }
}
