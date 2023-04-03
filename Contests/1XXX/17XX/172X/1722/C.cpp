#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        int N; cin >> N;
        map<string, int> M;
        vector<string> V1(N), V2(N), V3(N);

        for (int i = 0; i < N; i++) { cin >> V1[i]; M[V1[i]]++; }
        for (int i = 0; i < N; i++) { cin >> V2[i]; M[V2[i]]++; }
        for (int i = 0; i < N; i++) { cin >> V3[i]; M[V3[i]]++; }

        int ans1 = 0, ans2 = 0, ans3 = 0;
        for (int i = 0; i < N; i++) {
            if (M[V1[i]] == 2) ans1++;
            else if (M[V1[i]] == 1) ans1 += 3;
        }
        for (int i = 0; i < N; i++) {
            if (M[V2[i]] == 2) ans2++;
            else if (M[V2[i]] == 1) ans2 += 3;
        }
        for (int i = 0; i < N; i++) {
            if (M[V3[i]] == 2) ans3++;
            else if (M[V3[i]] == 1) ans3 += 3;
        }

        cout << ans1 << " " << ans2 << " " << ans3 << "\n";
    }
}
