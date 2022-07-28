#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define arr array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        ll n, k; cin >> n >> k;
        map<ll, ll> M;
        vector<ll> V(n);
        for (int i = 0; i < n; i++) {
            ll a; cin >> a;
            M[a]++;
            V[i] = a;
        }
        set<ll> G;
        multiset<ll> R;
        ll cnt = 0;
        for (auto x : M) {
            if (x.second >= k) {
                M[x.first] = k;
                G.insert(x.first);
            } else {
                cnt += x.second;
                for (int i = 0; i < x.second; i++)
                    R.insert(x.first);
            }
        }
        cnt -= cnt%k;
        map<ll, vector<int>> M2;
        ll temp = 0;
        for (auto x : R) {
            if (cnt > temp) {
                M2[x].push_back(temp%k+1);
                temp++;
            } else {
                M2[x].push_back(0);
                temp++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (G.find(V[i]) != G.end()) {
                if (M[V[i]] > 0) {
                    cout << M[V[i]] << " ";
                    M[V[i]]--;
                } else {
                    cout << 0 << " ";
                }
            } else {
                cout << M2[V[i]][M2[V[i]].size()-1] << " ";
                M2[V[i]].pop_back();
            }
        }
        cout << "\n";
    }
}
