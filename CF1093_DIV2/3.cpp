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
        long long p, q;
        cin >> p >> q;

        long long X = 2*p + 4*q + 1;

        bool found = false;

        for (long long i = 1; i * i <= X; i++) {
            if (X % i == 0) {
                long long a = i;
                long long b = X / i;

                if (a % 2 == 1 && b % 2 == 1) {
                    long long n = (a + 1) / 2;
                    long long m = (b + 1) / 2;

                    if (n > 0 && m > 0) {
                        cout << n << " " << m << "\n";
                        found = true;
                        break;
                    }
                }
            }
        }

        if (!found) cout << -1 << "\n";
    }
}
