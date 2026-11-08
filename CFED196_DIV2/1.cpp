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
        ll l, r;
        cin >> l >> r;

        ll n = r - l + 1;
        ll res;

        if (l > 0 || r < 0) {
            res = n - 1;
        }
        else {
            ll k = min(-l, r);
            res = max(0LL, n - 2 * k - 2);
        }

        cout << res << '\n';


    }
    return 0;
}
