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

        int k = 3 * n;

        for (int i = 1; i <= n; i++) {
            cout << i << " " << k - 1 << " " << k << " ";
            k -= 2;
        }
        cout << "\n";
    }

    return 0;
}