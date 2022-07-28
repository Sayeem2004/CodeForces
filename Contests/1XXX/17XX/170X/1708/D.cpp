#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v: V) cin >> v;
        long long cnt0 = 0;
        while (V.size() >= 1) {
            vector<long long> TMP;
            for (int i = 0; i < V.size()-1; i++) {
                if (V[i] == V[i+1]) cnt0++;
                else TMP.push_back(V[i+1]-V[i]);
            }
            if (cnt0 > 0) { TMP.push_back(0); cnt0--; }
            sort(TMP.begin(), TMP.end());
            V = TMP;
        }
        cout << V[0] << "\n";
    }
}
