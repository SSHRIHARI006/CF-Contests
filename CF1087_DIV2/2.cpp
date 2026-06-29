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

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        for (int i = 0; i < n; i++) {
            int less = 0, greater = 0;

            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) less++;
                else if (a[j] > a[i]) greater++;
            }

            cout << max(less, greater) << " ";
        }
        cout << '\n';

    }
    return 0;
}
