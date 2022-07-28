#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, t; cin >> n >> t;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
        cin >> V[i];
    int a = 0, b = 0, sm = 0, mx = 0, curr = 0;
    while (b < n) {
        if (sm + V[b] <= t) {
            sm += V[b];
            curr++;
            b++;
        } else {
            sm -= V[a];
            curr--;
            a++;
        }
        mx = max(mx, curr);
    }
    cout << mx << "\n";
}   
