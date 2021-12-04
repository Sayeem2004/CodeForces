#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector<set<int>> A(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        A[a-1].insert(b-1);
        A[b-1].insert(a-1);
    }
    vector<int> M(n, -1);
    for (int i = 0; i < n; i++) {
        if (A[i].size() != 0)
            M[i] = *--A[i].end();
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (i > M[i]) ans++;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int a; cin >> a;
        if (a == 1) {
            int b, c; cin >> b >> c;
            A[b-1].insert(c-1);
            A[c-1].insert(b-1);
            if (b-1 > M[b-1]) {
                M[b-1] = *--A[b-1].end();
                if (b-1 < M[b-1]) ans--;
            } else {
                M[b-1] = *--A[b-1].end();
            }
            if (c-1 > M[c-1]) {
                M[c-1] = *--A[c-1].end();
                if (c-1 < M[c-1]) ans--;
            } else {
                M[c-1] = *--A[c-1].end();
            }
        } else if (a == 2) {
            int b, c; cin >> b >> c;
            A[b-1].erase(c-1);
            A[c-1].erase(b-1);
            if (b-1 > M[b-1]) {
                if (A[b-1].size() == 0) M[b-1] = -1;
                else M[b-1] = *--A[b-1].end();
            } else {
                if (A[b-1].size() == 0) M[b-1] = -1;
                else M[b-1] = *--A[b-1].end();
                if (b-1 > M[b-1]) ans++;
            }
            if (c-1 > M[c-1]) {
                if (A[c-1].size() == 0) M[c-1] = -1;
                else M[c-1] = *--A[c-1].end();
            } else {
                if (A[c-1].size() == 0) M[c-1] = -1;
                else M[c-1] = *--A[c-1].end();
                if (c-1 > M[c-1]) ans++;
            }
        } else {
            cout << ans << "\n";
        }
    }

}
