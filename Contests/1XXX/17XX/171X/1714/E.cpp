#include <bits/stdc++.h>
using namespace std;

bool check(int dif) {
    return (dif % 20 == 0 || dif % 20 == 2 || dif % 20 == 6 || dif % 20 == 14);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        set<long long> S;
        for (long long &v : V) {
            cin >> v;
            if (v % 10 == 0) S.insert(v);
            else if (v % 10 == 1) v +=  1;
            else if (v % 10 == 2) v +=  0;
            else if (v % 10 == 3) v +=  9;
            else if (v % 10 == 4) v += 18;
            else if (v % 10 == 5) { v += 5; S.insert(v); }
            else if (v % 10 == 6) v +=  6;
            else if (v % 10 == 7) v += 25;
            else if (v % 10 == 8) v += 14;
            else if (v % 10 == 9) v += 23;
        }
        if (S.size() > 1) {
            cout << "NO\n";
        } else if (S.size() == 1) {
            bool br = false;
            long long mx = *S.begin();
            for (int i = 0; i < n; i++) {
                if (V[i] > mx) { br = true; break; }
                else if (!check(mx - V[i])) { br = true; break; }
            }
            if (br) cout << "NO\n";
            else cout << "YES\n";
        } else {
            long long mx = V[0];
            bool br = false;
            for (int i = 0; i < n; i++) {
                if (check(abs(mx - V[i]))) {
                    mx = max(mx, V[i]);
                } else {
                    br = true; break;
                }
            }
            if (br) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}
