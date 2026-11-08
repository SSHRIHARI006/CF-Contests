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
        cin >> n;

        vector<ll> a(n);
        ll total = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i] = 1LL << x;
            total += a[i];
        }

        sort(a.rbegin(), a.rend());

        ll l = 0;

        for (int i = 0; i < n; i++) {
            if (l + a[i] <= total / 2) {
                l += a[i];
            }
        }

        ll r = total - l;

        ll ans = l * r;

        cout << ans << '\n';
    }

    return 0;
}