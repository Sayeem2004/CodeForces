#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N, K; cin >> N >> K;
        vector<int> A;

        int cnt = 0, tot = 0, sm = 0;
        while (tot + cnt + 1 <= K) {
            tot += cnt + 1;
            sm += cnt + 2;
            A.insert(A.begin(), cnt + 2);
            cnt++;
        }

        int rem = K - tot;
        while (rem--) {
            cnt--;
            sm -= cnt + 2;
        }

        int lft = N - A.size();
        if (lft > 0) { A.push_back(-sm-1); lft--; }
        for (int i = 0; i < lft; i++) A.push_back(-1000);

        for (int i = 0; i < N; i++) cout << A[i] << " ";
        cout << "\n";
    }
}
