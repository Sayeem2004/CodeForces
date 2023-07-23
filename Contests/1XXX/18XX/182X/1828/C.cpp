#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        vector<int> A(N), B(N);

        for (int &a : A) cin >> a;
        for (int &b : B) cin >> b;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        vector<int> C(N);
        for (int i = 0; i < N; i++) {
            int pos = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
            C[i] = max(0, pos - i);
        }

        long long ans = 1;
        for (int i = 0; i < N; i++) ans = ans * C[i] % 1000000007;

        cout << ans << '\n';
    }
}
