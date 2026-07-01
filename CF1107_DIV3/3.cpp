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
        string s;
        cin >> s;

        int c = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] != s[i + 1]) {
                c++;
            }
        }

        if (c == 1) {
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    return 0;
}
