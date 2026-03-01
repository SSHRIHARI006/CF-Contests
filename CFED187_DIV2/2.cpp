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
        string x;
        cin >> x;

        int n = x.size();
        vector<int> digits(n);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            digits[i] = x[i] - '0';
            sum += digits[i];
        }

        if (sum <= 9) {
            cout << 0 << '\n';
            continue;
        }

        vector<int> reduce;

        for (int i = 0; i < n; i++) {
            if (i == 0) reduce.push_back(digits[i] - 1);
            else reduce.push_back(digits[i]);
        }

        sort(reduce.rbegin(), reduce.rend());

        int need = sum - 9;
        int moves = 0;

        for (int r : reduce) {
            need -= r;
            moves++;
            if (need <= 0) break;
        }

        cout << moves << '\n';
    }
    return 0;
}
