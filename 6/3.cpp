#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> odd, even;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x & 1) odd.push_back(x);
            else even.push_back(x);
        }

        sort(odd.begin(), odd.end(), greater<long long>());
        sort(even.begin(), even.end(), greater<long long>());

        int oc = odd.size(), ec = even.size();
        vector<long long> prefE(ec + 1);
        for (int i = 1; i <= ec; i++) prefE[i] = prefE[i - 1] + even[i - 1];

        for (int k = 1; k <= n; k++) {
            if (oc == 0) {
                cout << 0 << " ";
                continue;
            }

            int take_e = min(k, ec);
            int take_o = k - take_e;

            if (take_o % 2 == 0) {
                take_o++;
                take_e--;
            }

            if (take_o > oc || take_e < 0) {
                cout << 0 << " ";
            } else {
                long long score = prefE[take_e] + odd[0];
                cout << score << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}
