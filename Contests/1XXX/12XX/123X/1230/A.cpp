#include <bits/stdc++.h>
using namespace std;
#define int64 int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64 a,b,c,d; cin >> a >> b >> c >> d;
    int sum = a+b+c+d;
    if (sum % 2) cout << "NO" << "\n";
    else if (a+b == sum/2) cout << "YES" << "\n";
    else if (a+c == sum/2) cout << "YES" << "\n";
    else if (a+d == sum/2) cout << "YES" << "\n";
    else if (b+c == sum/2) cout << "YES" << "\n";
    else if (b+d == sum/2) cout << "YES" << "\n";
    else if (c+d == sum/2) cout << "YES" << "\n";
    else if (a+b+c == sum/2) cout << "YES" << "\n";
    else if (a+b+d == sum/2) cout << "YES" << "\n";
    else if (a+c+d == sum/2) cout << "YES" << "\n";
    else if (b+c+d == sum/2) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}
