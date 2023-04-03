#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int n; cin >> n;
    vector<int> V(n);
    for (int &v : V) cin >> v;
    sort(V.begin(), V.end());

    int cnt = 1, br = 0;
    for (int i = n-1; i >= 0; i--) {
        if (V[i] == V[i-1]) cnt++;
        else {
            if (cnt % 2 == 1) { br = true; break; }
            else cnt = 1;
        }
    }

    if (br) cout << "Conan\n";
    else cout << "Agasa\n";
}
