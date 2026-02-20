#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int &x : a) cin >> x;

        vector<int> freq(n+1, 0);
        for (int x : a) freq[x]++;

        int ans = 0;
        for (int x = 0; x <= n; x++) {
            int f = freq[x];
            if (x == 0) ans += f;
            else if (f < x) ans += f;
            else ans += f - x;
        }

        cout << ans << "\n";
    }
}
