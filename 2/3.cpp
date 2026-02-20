#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int xa = 0, xb = 0;
        for (int i = 0; i < n; i++) {
            xa ^= a[i];
            xb ^= b[i];
        }
        if (xa == xb) {
            cout << "Tie\n";
            continue;
        }

        int last = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) last = i;
        }

        if (last == -1) {
            cout << "Tie\n";
            continue;
        }

        if ((last + 1) % 2 == 1) cout << "Ajisai\n";
        else cout << "Mai\n";
    }
}
