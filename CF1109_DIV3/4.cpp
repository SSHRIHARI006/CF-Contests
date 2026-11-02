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
        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<int> b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(all(b));

        ll ans = 0, curr = 0;
        int j = 0;
        
        for(int i = 0; i < n; i++){
            curr += a[i];
            if(j < m && i + 1 == b[j]){
                ans += abs(curr);
                curr = 0;
                j++;
            }
        }
        ans += curr;
        cout << ans << "\n";
    }
    return 0;
}