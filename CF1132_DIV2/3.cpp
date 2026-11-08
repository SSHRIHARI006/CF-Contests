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
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        sort(all(a));

        if (k == n) {
            cout << "YES\n";
            for (auto x : a) cout << x << " ";
            cout << "\n";
            continue;
        }

        ll sum = 0;

        for (int i = n - k; i < n; i++) {
            sum += a[i];
        }

        if (sum <= 1LL * k * a[n - k - 1]) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        for (int i = n - k; i < n; i++) {
            cout << a[i] << " ";
        }

        for (int i = n - k - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}