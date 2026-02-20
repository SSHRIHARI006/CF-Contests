#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vll a(n);
    ll mn = LLONG_MAX, mx = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    vll b = a;
    sort(all(b));

    bool already_sorted = true;
    ll ans = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            ll reach = max(abs(a[i] - mn), abs(mx - a[i]));
            if (already_sorted) {
                ans = reach;
                already_sorted = false;
            } else {
                ans = min(ans, reach);
            }
        }
    }

    if (already_sorted) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
