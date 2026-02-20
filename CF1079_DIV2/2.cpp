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

        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> comp;
        for (int i = 0; i < n; i++) {
            if (comp.empty() || comp.back() != a[i])
                comp.pb(a[i]);
        }

        int i = 0, j = 0;
        while (i < n && j < comp.size()) {
            if (p[i] == comp[j]) j++;
            i++;
        }

        cout << (j == comp.size() ? "YES\n" : "NO\n");
    }

    return 0;
}
