#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];

        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());

        int ans = 0, cur = 0;
        for (int i = 0; i < (int)A.size(); i++) {
            if (i == 0 || A[i] != A[i - 1] + 1)
                cur = 1;
            else
                cur++;
            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
