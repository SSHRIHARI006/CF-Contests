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
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        long long g1 = __gcd(a, n);
        long long g2 = __gcd(b, m);

        long long x = n / g1;
        long long y = m / g2;

        if (x % 2 == 0 && y % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
