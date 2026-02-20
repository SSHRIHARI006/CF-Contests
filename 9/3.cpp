#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        long long maxL = k - 1;
        long long maxR = n - k;
        long long ans = 1;

        for (long long L = 1; L <= maxL; L++) {
            long long costL = 2 * L - 1;
            if (costL > m) break;

            long long rem = m - costL;
            long long Rbest = 0;

            long long R1 = min({rem, L, maxR});
            if (R1 >= 0) Rbest = max(Rbest, R1);

            long long R2 = (rem + L) / 2;
            R2 = min(R2, maxR);
            if (R2 > L) Rbest = max(Rbest, R2);

            ans = max(ans, 1 + L + Rbest);
        }

        if (m >= 1) {
            long long R0 = (m + 1) / 2;
            R0 = min(R0, maxR);
            ans = max(ans, 1 + R0);
        }

        cout << min((long long)n, ans) << "\n";
    }

    return 0;
}
