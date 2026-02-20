#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;

        ll free_dist = 0;
        ll best_gain = LLONG_MIN;
        bool ok = false;

        for (int i = 0; i < n; i++) {
            ll a, b, c;
            cin >> a >> b >> c;

            free_dist += a * (b - 1);

            ll gain = a * b - c;
            if (gain > 0) {
                ok = true;
                best_gain = max(best_gain, gain);
            }
        }

        if (free_dist >= x) {
            cout << 0 << '\n';
            continue;
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        ll need = x - free_dist;
        ll ans = (need + best_gain - 1) / best_gain;
        cout << ans << '\n';
    }
    return 0;
}
