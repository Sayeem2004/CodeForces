#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int cnt0 = 0, cnt1 = 0;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
        if (V[i] == 0) cnt0++;
        else cnt1++;
    }
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        if (a == 1) {
            if (V[b-1] == 0) {
                cnt1++; cnt0--;
                V[b-1] = 1;
            } else {
                cnt0++; cnt1--;
                V[b-1] = 0;
            }
        } else {
            if (b <= cnt1) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }
}
