#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    int n; cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n/3; i++) {
        cout << "? " << 3*i+1 << " " << 3*i+2 << endl;
        int a; cin >> a;
        cout << "? " << 3*i+2 << " " << 3*i+3 << endl;
        int b; cin >> b;
        cout << "? " << 3*i+1 << " " << 3*i+3 << endl;
        int c; cin >> c;
        V[3*i+1] = a+b-c;
        V[3*i] = a-V[3*i+1];
        V[3*i+2] = b-V[3*i+1];
    }
    vector<int> P(n+1);
    for (int i = 1; i <= n/3*3; i++)
        P[i] = P[i-1] + V[i-1];
    if (n%3 == 1) {
        cout << "? " << 1 << " " << n << endl;
        int a; cin >> a;
        V[n-1] = a-P[n-1];
    } else if (n%3 == 2) {
        cout << "? " << 1 << " " << n-1 << endl;
        int a; cin >> a;
        V[n-2] = a-P[n-2];
        P[n-1] = P[n-2] + V[n-2];
        cout << "? " << 1 << " " << n << endl;
        int b; cin >> b;
        V[n-1] = b-P[n-1];
    }
    cout << "! ";
    for (auto x : V)
        cout << x << " ";
    cout << endl;
}
