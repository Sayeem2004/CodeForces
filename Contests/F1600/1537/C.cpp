#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        sort(V.begin(),V.end());
        int dif = 2000000000;
        int pos = -1;
        for (int i = 0; i < n-1; i++) {
            if (V[i+1]-V[i] < dif) {
                dif = V[i+1]-V[i];
                pos = i;
            }
        }
        cout << V[pos] << " ";
        for (int i = pos+2; i < n; i++) {
            cout << V[i] << " ";
        }
        for (int i = 0; i < pos; i++) {
            cout << V[i] << " ";
        }
        cout << V[pos+1] << "\n";
    }
}
