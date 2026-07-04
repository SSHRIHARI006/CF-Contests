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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int min_calls = n;

        for (int i = 0; i < n; i++) {
            int L_count = lower_bound(a.begin(), a.end(), a[i]) - a.begin();
            
            int R_start = upper_bound(a.begin(), a.end(), a[i]) - a.begin();
            int R_count = n - R_start;

            min_calls = min(min_calls, max(L_count, R_count));
        }

        cout << min_calls << "\n";
    }
    return 0;
}
