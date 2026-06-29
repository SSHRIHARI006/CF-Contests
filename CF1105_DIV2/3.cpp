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
        ll total_xor = 0;
        int non_zero_count = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_xor ^= a[i];
            if (a[i] > 0) {
                non_zero_count++;
            }
        }
        
        if (non_zero_count <= 1) {
            cout << 0 << "\n";
            continue;
        }
        
        ll valid_moves = 0;
        
        if (total_xor == 0) {
            valid_moves++;
        }
        
        for (int i = 0; i < n; i++) {
            ll xor_others = total_xor ^ a[i];
            if (xor_others < a[i]) {
                valid_moves++;
            }
        }
        
        cout << valid_moves << "\n";
    }
    return 0;
}