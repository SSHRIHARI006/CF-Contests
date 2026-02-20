#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        sort(A.begin(), A.end());

        vector<ll> prefB(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefB[i + 1] = prefB[i] + B[i];
        }

        ll ans = 0;

        for (int i = 0; i < n; i++) {
            ll x = A[i];
            ll power = n - i;

            int cleared =
                upper_bound(prefB.begin(), prefB.end(), power) - prefB.begin() - 1;

            ans = max(ans, x * cleared);
        }

        cout << ans << "\n";
    }
    return 0;
}
