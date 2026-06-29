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
        vector<long long> b(n);

        for (int i = 0; i < n; i++) cin >> b[i];

        if (n == 2) {
            long long x = max(b[0], b[1]);
            long long y = min(b[0], b[1]);
            cout << x << ' ' << y << '\n';
            continue;
        }

        sort(b.rbegin(), b.rend());

        bool ok = true;
        for (int i = 0; i + 2 < n; i++) {
            if (b[i] % b[i + 1] != b[i + 2]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << b[0] << ' ' << b[1] << '\n';
        } else {
            cout << -1 << '\n';
        }       
    }
    return 0;
}
