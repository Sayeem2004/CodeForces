#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    if (s.size() == 4) cout << "none\n";
    else {
        string word = (s.size() == 3 ? "the" : s.size() == 5 ? "buffy" : s.size() == 6 ? "slayer" : "vampire");
        for (int i = 0; i < s.size(); i++) {
            cout << char((((s[i] - 'a') + (word[i] - 'a') + 26) % 26) + 'a');
        }
        cout << "\n";
    }
}
