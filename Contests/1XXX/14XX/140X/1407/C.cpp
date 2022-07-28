#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    int n; cin >> n;
    if (n == 1) cout << "! 1" << endl;
    else {
        vector<int> A(n);
        int mxp = 1;
        for (int i = 2; i <= n; i++) {
            cout << "? " << mxp << " " << i << endl;
            int a; cin >> a;
            cout << "? " << i << " " << mxp << endl;
            int b; cin >> b;
            if (a > b) {
                A[mxp-1] = a;
                mxp = i;
            } else {
                A[i-1] = b;
            }
        }
        A[mxp-1] = n;
        string ret = "!";
        for (auto x : A)
            ret += " " + to_string(x);
        cout << ret << endl;
    }
}
