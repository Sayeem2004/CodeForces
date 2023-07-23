#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long T; cin >> T; while (T--) {
        long long N, A, B; cin >> N >> A >> B;
        vector<pair<long long, long long>> V(N);
        for (long long i = 0; i < N; i++) {
            cin >> V[i].first;
            V[i].second = i+1;
        }
        sort(V.rbegin(), V.rend());

        long long dA = A, dB = B;
        vector<long long> AA, BB;

        if (A < B) {
            for (long long i = 0; i < N; i++) {
                if (B * V[i].first <= A * V[i].first) { B += dB; BB.push_back(V[i].second); }
                else { A += dA; AA.push_back(V[i].second); }
            }
        } else {
            for (long long i = 0; i < N; i++) {
                if (A * V[i].first <= B * V[i].first) { A += dA; AA.push_back(V[i].second);
                } else { B += dB; BB.push_back(V[i].second); }
            }
        }

        cout << AA.size() << " ";
        for (long long &a : AA) cout << a << " ";
        cout << "\n";

        cout << BB.size() << " ";
        for (long long &b : BB) cout << b << " ";
        cout << "\n";
    }
}
