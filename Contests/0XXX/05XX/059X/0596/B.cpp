#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<bool> b(100001,false);
    vector<int> v(100001),c(100001,0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        b[v[i]] = true;
        c[v[i]]++;
    }
    int q = 1;
    for (int i = 0; i < n; i++) {
        if (c[v[i]] > 1 || v[i] > n) {
            while (b[q]) {
                q++;
            }
            c[v[i]]--;
            v[i] = q;
            c[q]++;
            b[q] = true;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
