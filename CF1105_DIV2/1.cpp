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
        ll n, k;
        cin >> n >> k;
        
        ll ans = 0;
        
        for (int i = 0; i <= 30; i++) {
            ll val = 1LL << i;
            
            ll take = min(k, n / val);
            
            if (take == 0) break; 
            
            ans += take;
            n -= take * val;
        }
        
        cout << ans << "\n";
        
    }
    return 0;
}
