#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        ll k;
        cin >> n >> m >> k;

        vll A(n), orig(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            orig[i] = A[i];
        }

        vector<int> lastUpdate(n, -1);
        int last_reset = -1;

        for (int i = 0; i < m; i++) {
            int a;
            ll b;
            cin >> a >> b;
            a--;

            if (lastUpdate[a] < last_reset)
                A[a] = orig[a];

            A[a] += b;

            if (A[a] > k) {
                last_reset = i;
                A[a] = orig[a];
            } else {
                lastUpdate[a] = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (lastUpdate[i] < last_reset)
                A[i] = orig[i];
        }

        for (ll x : A) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
