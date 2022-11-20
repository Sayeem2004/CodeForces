#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<array<long long, 2>> V(n);
        for (int i = 0; i < n; i++) {
            long long a, b; cin >> a >> b;
            V[i] = {min(a, b), max(a, b)};
        }

        sort(V.begin(), V.end());
        long long ans1 = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) ans1 += V[i][0];
            else ans1 += V[i][0] - V[i-1][0];
            ans1 += 2*V[i][1];
        }
        ans1 += V[n-1][0];

        for (int i = 0; i < n; i++)
            swap(V[i][0], V[i][1]);

        sort(V.begin(), V.end());
        long long ans2 = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) ans2 += V[i][0];
            else ans2 += V[i][0] - V[i-1][0];
            ans2 += 2*V[i][1];
        }
        ans2 += V[n-1][0];

        cout << min(ans1, ans2) << "\n";
    }
}
