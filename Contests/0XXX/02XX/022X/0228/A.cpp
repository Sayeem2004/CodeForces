#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    set<int> S;
    for (int i = 0; i < 4; i++) {
        int x; cin >> x;
        S.insert(x);
    }
    cout << 4 - S.size() << "\n";
}
