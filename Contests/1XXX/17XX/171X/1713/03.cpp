#include <bits/stdc++.h>
using namespace std;

long long query4(long long s, long long e) {
    long long res;
    if (s+3 == e) {
        cout << "? " << s << " " << s+2 << endl; cin >> res;
        if (res == 1) {
            cout << "? " << s << " " << s+3 << endl; cin >> res;
            return (res <= 1 ? s : s+3);
        } else if (res == 2) {
            cout << "? " << s+1 << " " << s+2 << endl; cin >> res;
            return (res <= 1 ? s+1 : s+2);
        } else {
            cout << "? " << s+1 << " " << s+3 << endl; cin >> res;
            return (res <= 1 ? s+1 : s+3);
        }
    } else {
        long long dif = (e - s) / 4;
        long long a = query4(s, s+dif), b = query4(s+dif+1, s+dif+dif+1);
        long long c = query4(e-dif-dif-1, e-dif-1), d = query4(e-dif, e);
        cout << "? " << a << " " << c << endl; cin >> res;
        if (res == 1) {
            cout << "? " << a << " " << d << endl; cin >> res;
            return (res <= 1 ? a : d);
        } else if (res == 2) {
            cout << "? " << b << " " << c << endl; cin >> res;
            return (res <= 1 ? b : c);
        } else {
            cout << "? " << b << " " << d << endl; cin >> res;
            return (res <= 1 ? b : d);
        }
    }
}

long long query2(long long s, long long e) {
    long long res;
    if (s+1 == e) {
        cout << "? " << s << " " << e << endl; cin >> res;
        return (res <= 1 ? s : e);
    } else {
        long long l = query4(s, (s+e)/2), r = query4((s+e)/2+1, e);
        cout << "? " << l << " " << r << endl; cin >> res;
        return (res <= 1 ? l : r);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, ans; cin >> n;
        if (n % 2 == 0) ans = query4(1, 1 << n);
        else ans = query2(1, 1 << n);
        cout << "! " << ans << endl;
    }
}
