#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (int i = 0; i < n; i++) cin >> V[i];
        long long prev = -1, left = n, right = 0;
        array<long long, 2> ans = {1, 0};
        for (long long i = 0; i <= n; i++) {
            if (i == n || V[i] == 0) {
                array<long long, 2> tot = {0, 0};
                long long cnt = 0;
                for (long long q = prev+1; q < i; q++) {
                    if (abs(V[q]) == 1) tot[0]++;
                    else if (abs(V[q]) == 2) tot[1]++;
                    if (V[q] < 0) cnt++;
                }
                if (cnt % 2 == 1) {
                    array<long long, 2> lft = {0, 0}, rgt = {0, 0};
                    long long l = -1, r = -1;
                    for (long long q = prev+1; q < i; q++) {
                        if (abs(V[q]) == 1) lft[0]++;
                        else if (abs(V[q]) == 2) lft[1]++;
                        if (V[q] < 0) { l = q; break; }
                    }
                    for (long long q = i-1; q > prev; q--) {
                        if (abs(V[q]) == 1) rgt[0]++;
                        else if (abs(V[q]) == 2) rgt[1]++;
                        if (V[q] < 0) { r = q; break; }
                    }
                    if (lft[1] < rgt[1]) {
                        if (tot[1]-lft[1] > ans[1]) {
                            ans = {tot[0]-lft[0], tot[1]-lft[1]};
                            left = l+1;
                            right = n-i;
                        }
                    } else {
                        if (tot[1]-rgt[1] > ans[1]) {
                            ans = {tot[0]-rgt[0], tot[1]-rgt[1]};
                            left = prev+1;
                            right = n-r;
                        }
                    }
                } else {
                    if (tot[1] > ans[1]) {
                        ans = tot;
                        left = prev+1;
                        right = n-i;
                    }
                }
                prev = i;
            }
        }
        cout << left << " " << right << "\n";
    }
}
