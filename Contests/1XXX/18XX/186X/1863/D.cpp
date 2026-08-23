#include <bits/stdc++.h>
// #pragma GCC optimize("O3, unroll-loops")
// #pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")

int main(int ARGC, char* ARGV[]) {
    std::ios::sync_with_stdio(0); std::cin.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; std::cin >> T; while (T--) {
        int N, M; std::cin >> N >> M;
        std::map<int, int> ROW, COL;
        std::vector<std::string> A(N);

        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
            for (int q = 0; q < M; q++) {
                if (A[i][q] != '.') { ROW[i]++; COL[q]++; }
            }
        }

        bool br = false;
        for (int i = 0; i < N; i++) if (ROW[i] % 2 == 1) { br = true; break; }
        for (int i = 0; i < M; i++) if (COL[i] % 2 == 1) { br = true; break; }
        if (br) { std::cout << "-1\n"; continue; }

        std::vector<int> CL(M), CR(M), RU(N), RD(N);
        for (int i = 0; i < N; i++) {
            for (int q = 0; q < M; q++) {
                if (A[i][q] == '.') { std::cout << "."; continue; }

                if (A[i][q] == 'L') {
                    if (CL[q] % 2) std::cout << "B";
                    else std::cout << "W";
                    CL[q] += 1; continue;
                }

                if (A[i][q] == 'R') {
                    if (CR[q] % 2) std::cout << "W";
                    else std::cout << "B";
                    CR[q] += 1; continue;
                }

                if (A[i][q] == 'U') {
                    if (RU[i] % 2) std::cout << "B";
                    else std::cout << "W";
                    RU[i] += 1; continue;
                }

                if (A[i][q] == 'D') {
                    if (RD[i] % 2) std::cout << "W";
                    else std::cout << "B";
                    RD[i] += 1; continue;
                }
            }

            std::cout << "\n";
        }
    }
}
