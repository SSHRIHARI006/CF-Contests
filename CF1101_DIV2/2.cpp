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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll current_sum = 0;
        ll global_max_h = a[0];

        for (int i = 0; i < n; i++) {
            current_sum += a[i];
            ll prefix_len = i + 1;

            ll low = 1, high = 2e15;
            ll current_prefix_ans = 0;

            while (low <= high) {
                ll mid = low + (high - low) / 2;
                if (current_sum / prefix_len >= mid) {
                    current_prefix_ans = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            global_max_h = min(global_max_h, current_prefix_ans);
            cout << global_max_h << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}