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
        int n;
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> a(n), c(n), r(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[i] = a[i] / x;
            r[i] = a[i] % x;
        }

        ll T = 0;
        for (ll v : c) T += v;

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ll cur = a[i] + (T - c[i]) * y ;
            ans = max(ans, cur);
        }

        cout << ans << "\n";
    }
    return 0;
}
