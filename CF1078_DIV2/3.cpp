#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<string> a(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        for (int d = 1; d <= n; d++) {
            vector<char> t(d);
            bool ok = true;

            for (int r = 0; r < d && ok; r++) {
                vector<int> cur(26, 1);

                for (int i = r; i < n; i += d) {
                    vector<int> has(26, 0);
                    for (int j = 0; j < k; j++)
                        has[a[j][i] - 'a'] = 1;
                    for (int c = 0; c < 26; c++)
                        cur[c] &= has[c];
                }

                int pick = -1;
                for (int c = 0; c < 26; c++)
                    if (cur[c]) {
                        pick = c;
                        break;
                    }

                if (pick == -1) ok = false;
                else t[r] = char('a' + pick);
            }

            if (ok) {
                string s;
                for (int i = 0; i < n; i++)
                    s.push_back(t[i % d]);
                cout << s << '\n';
                break;
            }
        }
    }
    return 0;
}
