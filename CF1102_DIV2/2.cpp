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
        long long n;
        cin >> n;

        if (n == 10) {
            cout << -1 << '\n';
            continue;
        }

        long long r = n % 12;
        long long a;

        if (r <= 9) a = r;
        else if (r == 11) a = 11;
        else a = 22;

        if (a > n) {
            cout << -1 << '\n';
        } else {
            cout << a << ' ' << (n - a) << '\n';
        }       
    }
    return 0;
}
