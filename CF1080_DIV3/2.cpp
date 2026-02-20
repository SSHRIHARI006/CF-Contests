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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> visited(n + 1, 0);
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;

            vector<int> idx;
            vector<int> vals;

            int j = i;
            while (j <= n) {
                visited[j] = 1;
                idx.push_back(j);
                vals.push_back(a[j]);
                j *= 2;
            }

            sort(idx.begin(), idx.end());
            sort(vals.begin(), vals.end());

            if (idx != vals) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");



    }
    return 0;
}
