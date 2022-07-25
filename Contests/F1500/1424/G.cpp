#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    multiset<array<long long, 2>> MS;
    for (int i = 0; i < n; i++) {
        long long b, d; cin >> b >> d;
        MS.insert({b, 1});
        MS.insert({d, 0});
    }
    long long mx = -1, curr = 0, yr = -1;
    for (auto x : MS) {
        if (x[1] == 1) curr++;
        else curr--;
        if (curr > mx) {
            mx = curr;
            yr = x[0];
        }
    }
    cout << yr << " " << mx << "\n";
}
