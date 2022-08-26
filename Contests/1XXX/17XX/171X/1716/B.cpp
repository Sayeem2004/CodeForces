#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        cout << n << "\n";
        vector<int> V(n);
        for (int i = 0; i < n; i++) V[i] = i+1;
        for (int v : V) cout << v << " "; cout << "\n";
        for (int i = 1; i < n; i++) {
            swap(V[i], V[i-1]);
            for (int v : V) cout << v << " "; cout << "\n";
        }
    }
}
