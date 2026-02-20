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
        long long n, w;
        cin >> n >> w;

        if (w == 1) {
            cout << 0 << '\n';
            continue;
        }

        long long ans = (n / w) * (w - 1) + (n % w);
        cout << ans << '\n';
    }
    return 0;
}
