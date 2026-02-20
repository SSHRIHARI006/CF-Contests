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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        const int INF = 1e9;
        vector<vector<int>> dp(n, vector<int>(7, INF));

        for (int x = 1; x <= 6; x++) {
            dp[0][x] = (a[0] != x);
        }

        for (int i = 1; i < n; i++) {
            for (int x = 1; x <= 6; x++) {
                for (int prev = 1; prev <= 6; prev++) {
                    if (x == prev) continue;
                    if (x + prev == 7) continue;

                    dp[i][x] = min(dp[i][x],
                                   dp[i-1][prev] + (a[i] != x));
                }
            }
        }

        int ans = *min_element(dp[n-1].begin()+1, dp[n-1].end());
        cout << ans << "\n";
    }
    return 0;
}
