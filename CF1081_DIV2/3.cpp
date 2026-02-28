#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, h, k;
        cin >> n >> h >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];

        ll total = pref[n];

        vector<ll> suff(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) suff[i] = max(suff[i + 1], a[i]);

        vector<ll> prefix_min(n);
        prefix_min[0] = a[0];
        for (int i = 1; i < n; i++) prefix_min[i] = min(prefix_min[i - 1], a[i]);

        ll ans = LLONG_MAX;

        for (int len = 1; len <= n; len++) {
            ll best = pref[len];

            if (len < n) {
                best += max(0LL, suff[len] - prefix_min[len - 1]);
            }

            if (best >= h) {
                ans = min(ans, (ll)len);
            } else {
                ll rem = h - best;
                ll cycles = (rem + total - 1) / total;
                ll time = cycles * (n + k) + len;
                ans = min(ans, time);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}