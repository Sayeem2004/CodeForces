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
        sort(V.begin(), V.end());

        int l = 0, r = N-1;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) A[i] = V[r--];
            else A[i] = V[l++];
        }

        if (A[0] == A[1]) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int a : A) cout << a << ' ';
            cout << '\n';
        }
    }
}
