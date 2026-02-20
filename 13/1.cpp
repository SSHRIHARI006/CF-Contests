

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        int cntH = 0, cntL = 0, cntBoth = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= h) cntH++;
            if (x <= l) cntL++;
            if (x <= min(h, l)) cntBoth++;
        }

        int ans = min({cntH, cntL, (cntH + cntL - cntBoth) / 2});
        cout << ans << '\n';
    }
    return 0;
    }



