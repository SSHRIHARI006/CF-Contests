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
        string str;
        cin >> str;

        int dab = 0;
        for (int j = 0; j + 1 < (int)str.size(); j++) {
            if (str[j] == str[j + 1]) dab++;
        }

        if (dab <= 2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}