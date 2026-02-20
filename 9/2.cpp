#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), cnt(n + 2);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n) cnt[a[i]]++;
    }
    int mex0 = 0;
    while (cnt[mex0]) mex0++;
    cout << min(k - 1, mex0) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
