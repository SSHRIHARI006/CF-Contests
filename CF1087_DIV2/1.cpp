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
        ll n, c, k;
        cin >> n >> c >> k;

        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            if (a[i] > c) break;

            ll use = min(k, c - a[i]);
            a[i] += use;
            k -= use;

            c += a[i];
        }

        cout << c << '\n';
    }
    return 0;
}
