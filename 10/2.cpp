#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long flips = m / k;
        long long r = m % k;

        long long start;

        if (k >= s) {
            start = s;
        } else {
            if (flips % 2 == 0) start = s;
            else start = k;
        }

        cout << max(0LL, start - r) << '\n';
    }
}
