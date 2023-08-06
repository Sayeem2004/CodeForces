#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        std::string A, B, C; std::cin >> A >> B >> C;

        if (A[0] == A[1] && A[1] == A[2] && A[0] != '.') { std::cout << A[0] << "\n"; continue; }
        if (B[0] == B[1] && B[1] == B[2] && B[0] != '.') { std::cout << B[0] << "\n"; continue; }
        if (C[0] == C[1] && C[1] == C[2] && C[0] != '.') { std::cout << C[0] << "\n"; continue; }

        if (A[0] == B[0] && B[0] == C[0] && A[0] != '.') { std::cout << A[0] << "\n"; continue; }
        if (A[1] == B[1] && B[1] == C[1] && A[1] != '.') { std::cout << A[1] << "\n"; continue; }
        if (A[2] == B[2] && B[2] == C[2] && A[2] != '.') { std::cout << A[2] << "\n"; continue; }

        if (A[0] == B[1] && B[1] == C[2] && A[0] != '.') { std::cout << A[0] << "\n"; continue; }
        if (A[2] == B[1] && B[1] == C[0] && A[2] != '.') { std::cout << A[2] << "\n"; continue; }

        std::cout << "DRAW\n";
    }
}
