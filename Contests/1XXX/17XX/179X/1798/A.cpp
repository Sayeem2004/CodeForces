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

        int mxA = 0, mxB = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) swap(A[i], B[i]);
            mxA = max(mxA, A[i]);
            mxB = max(mxB, B[i]);
        }

        if (mxA == A[N-1] && mxB == B[N-1]) cout << "Yes\n";
        else cout << "No\n";
    }
}
