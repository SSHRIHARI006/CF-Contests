#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> A(n), B(n), C(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];
        for (int i = 0; i < n; i++) cin >> C[i];

        vector<int> okAB(n, 1), okBC(n, 1);

        for (int x = 0; x < n; x++) {
            for (int i = 0; i < n; i++) {
                if (A[i] >= B[(i + x) % n]) {
                    okAB[x] = 0;
                    break;
                }
            }
        }

        for (int y = 0; y < n; y++) {
            for (int i = 0; i < n; i++) {
                if (B[i] >= C[(i + y) % n]) {
                    okBC[y] = 0;
                    break;
                }
            }
        }

        long long cntAB = 0, cntBC = 0;
        for (int v : okAB) cntAB += v;
        for (int v : okBC) cntBC += v;

        cout << cntAB * cntBC * n << '\n';
    }
    return 0;
}
