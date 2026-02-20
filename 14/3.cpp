#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        vector<ll> best(n);
        best[n - 1] = max(A[n - 1], B[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            best[i] = max({(ll)A[i], (ll)B[i], best[i + 1]});
        }

        vector<ll> pref(n);
        pref[0] = best[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + best[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            ll sum = pref[r] - (l ? pref[l - 1] : 0);
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}
