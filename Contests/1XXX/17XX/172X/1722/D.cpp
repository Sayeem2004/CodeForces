#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        string S; cin >> S;
        vector<long long> V(N);

        long long sm = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == 'L') { V[i] = (N - i - 1) - i; sm += i; }
            else { V[i] = i - (N - i - 1); sm += N - i - 1; }
        }
        sort(V.rbegin(), V.rend());

        for (int i = 0; i < N; i++) {
            if (V[i] >= 0) sm += V[i];
            cout << sm << " ";
        }
        cout << "\n";
    }
}
