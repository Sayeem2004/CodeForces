#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int a, b; cin >> a >> b;
        if (a > b) {
            for (int i = 0; i < b; i++) cout << "10";
            for (int i = b; i < a; i++) cout << "0";
        } else {
            for (int i = 0; i < a; i++) cout << "10";
            for (int i = a; i < b; i++) cout << "1";
        }
        cout << "\n";
    }
}
