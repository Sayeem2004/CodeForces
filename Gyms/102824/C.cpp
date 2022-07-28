#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    vector<long long> A(n), PA(n), B(n), PB(n), C(n);
    for (int i = 0; i < n; i++) {
        long long a; cin >> a; a--;
        A[i] = a; PA[a] = i;
    }
    for (int i = 0; i < n; i++) {
        long long b; cin >> b; b--;
        B[i] = b; PB[b] = i;
    }
    long long curr = 0, mn = 1000000000000, delta = 0;
	for (int i = 0; i < n; i++) {
		curr += abs(PA[i] - PB[i]);
		delta += PB[i] < PA[i] ? -1 : 1;
        C[(PA[i] - PB[i] + n) % n]++;
	}
    for (int i = 0; i < n; i++) {
        mn = min(mn, curr);
        curr += delta + 2 * PA[B[n-i-1]] - n;
        delta += (C[(i+1) % n] - 1) * 2;
    }
    cout << mn << "\n";
}
