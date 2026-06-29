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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        for (int i = 0; i + k < n; i++) {
            if (s[i] == '1') {
                s[i] = '0';
                s[i + k] = (s[i + k] == '0' ? '1' : '0');
            }
        }

        bool ok = true;
        for (int i = max(0, n - k); i < n; i++) {
            if (s[i] == '1') {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}
