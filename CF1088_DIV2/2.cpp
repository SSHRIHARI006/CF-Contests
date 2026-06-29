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
        int x, y;
        cin >> x >> y;

        int s = x - y;

        int ans = 0;

        if (s == 0) {
            ans = 1;
        } else {
            int v = abs(s);
            for (int i = 1; i * i <= v; i++) {
                if (v % i == 0) {
                    ans++;
                    if (i != v / i) ans++;
                }
            }
        }

        cout << ans << "\n";

        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << "\n";
    }
}
