#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n;
    cin >> n;

    vi p(n);

    for (int i = n; i >= 1; i--) {
        if ((n + i) % 2 == 0) {
            p[i - 1] = (n + i) / 2;
        } else {
            p[i - 1] = (n - i + 1) / 2;
        }
    }

    for (int x : p) cout << x << " ";
    cout << '\n';
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
