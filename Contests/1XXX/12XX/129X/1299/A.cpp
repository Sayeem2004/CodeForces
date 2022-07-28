#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    vector<long long> V(n);
    for (long long &v : V) cin >> v;
    vector<long long> P(n), S(n);
    P[0] = ~V[0];
    for (long long i = 1; i < n; i++)
        P[i] = P[i-1] & (~V[i]);
    S[n-1] = ~V[n-1];
    for (long long i = n-2; i >= 0; i--)
        S[i] = (~V[i]) & S[i+1];
    long long mx = -1, pos = -1;
    for (long long i = 0; i < n; i++) {
        long long val = (i == 0 ? V[i] & S[i+1] : (i == n-1 ? P[n-2] & V[i] : P[i-1] & V[i] & S[i+1]));
        if (val > mx) {
            mx = val;
            pos = i;
        }
    }
    cout << V[pos] << " ";
    for (long long i = 0; i < n; i++) {
        if (i == pos) continue;
        cout << V[i] << " ";
    }
    cout << "\n";
}
