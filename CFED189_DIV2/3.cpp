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

        string str1, str2;
        cin >> str1 >> str2;

        int i = 0;
        int res = 0;

        while (i < n) {
            if (str1[i] == str2[i]) {
                i++;
            } else {
                if (i + 1 < n) {
                    res += (str1[i] != str1[i + 1]);
                    res += (str2[i] != str2[i + 1]);
                    i += 2;
                } else {
                    res += 1;
                    i++;
                }
            }
        }

        cout << res << "\n";
    }

    return 0;
}
