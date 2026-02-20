#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> dist(2*n, 1e9);
        int last = -1e9;

        for (int i = 0; i < 2*n; i++) {
            if (s[i % n] == '1') last = i;
            dist[i] = i - last;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                ans = max(ans, dist[i + n]);
        }

        cout << ans << '\n';
    }
}
