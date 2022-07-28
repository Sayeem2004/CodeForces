#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<string> V(n);
    for (string &v : V) cin >> v;
    string word = "theseus";
    bool br = false;
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < n-7) {
				string tmp = "";
				for (int k = 0; k < 7; k++) tmp += V[i+k][j];
				if (tmp == word) { br = true; break; }
			}
			if (j < n-7) {
				string tmp = "";
				for (int k = 0; k < 7; k++) tmp += V[i][j+k];
				if (tmp == word) { br = true; break; }
			}
			if (i < n-7 && j < n-7) {
				string tmp = "";
				for (int k = 0; k < 7; k++) tmp += V[i+k][j+k];
				if (tmp == word) { br = true; break; }
			}
		}
    }
    if (br) cout << "YES" << endl;
    else cout << "NO" << endl;
}
