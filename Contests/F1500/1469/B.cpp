#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<int> red(n);
        for (int i = 0; i < n; i++)
            cin >> red[i];
        int m; cin >> m;
        vector<int> blue(m);
        for (int i = 0; i < m; i++)
            cin >> blue[i];
        vector<int> pb(m),pr(n);
        pb[0] = blue[0];
        pr[0] = red[0];
        for (int i = 1; i < n; i++)
            pr[i] = pr[i-1]+red[i];
        for (int i = 1; i < m; i++)
            pb[i] = pb[i-1]+blue[i];
        int m1 = 0, m2 = 0;
        for (int i = 0; i < n; i++)
            m1 = max(m1,pr[i]);
        for (int i = 0; i < m; i++)
            m2 = max(m2,pb[i]);
        cout << m1+m2 << "\n";
    }
}
