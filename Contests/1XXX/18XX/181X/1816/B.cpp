#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;

        vector<int> A1(N); A1[0] = 2*N;
        vector<int> A2(N); A2[N-1] = 2*N-1;

        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) A2[i] = i+1;
            else A1[i] = i+1;
        }
        for (int i = 1; i < N-1; i++) {
            if (i % 2 == 0) A1[i] = i+N;
            else A2[i] = i+N;
        }

        for (int a : A1) cout << a << " ";
        cout << "\n";
        for (int a : A2) cout << a << " ";
        cout << "\n";
    }
}
