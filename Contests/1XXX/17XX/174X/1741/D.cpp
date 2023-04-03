#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<int> V(N);
        for (int &v : V) cin >> v;

        int cnt = 0, pow = 1;
        bool br = false;
        while (V.size() > 1) {
            vector<int> T;

            for (int i = 0; i < V.size(); i += 2) {
                if (abs(V[i+1] - V[i]) == pow) {
                    T.push_back(max(V[i], V[i+1]));
                    if (V[i+1] < V[i]) cnt++;
                } else { br = true; break; }
            }

            if (br) break;
            V = T; pow *= 2;
        }

        if (br) cout << -1 << "\n";
        else cout << cnt <<  "\n";
    }
}
