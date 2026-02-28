#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back


int countBlocks(const string &s) {
    int cnt = 1;
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] != s[i - 1]) cnt++;
    }
    return cnt;
}

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

        string t2 = s + s;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 1;
            for (int j = i + 1; j < i + n; j++) {
                if (t2[j] != t2[j - 1]) cnt++;
            }
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
    return 0;
}