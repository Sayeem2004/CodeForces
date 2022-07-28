#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 n; cin >> n;
    vector<int64> v(n), v2(n);
    for (int64 i = 0; i < n; i++)
        cin >> v[i];
    for (int64 i = 0; i < n; i++)
        cin >> v2[i];
    int64 count = 0, count2 = 0;
    for (int64 i = 0; i < n; i++) {
        if (v[i] && !v2[i]) count++;
        if (!v[i] && v2[i]) count2++;
    }
    if (!count) cout << -1 << "\n";
    else cout << count2/count+1 << "\n";
}
