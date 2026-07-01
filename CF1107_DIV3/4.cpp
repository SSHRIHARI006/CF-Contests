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
 
        vector<long long> a(n), b(n);
 
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 1; i < n; i++) a[i] += a[i - 1];
        for(int i = 1; i < n; i++) b[i] += b[i - 1];
 
        bool is = 1;
        for(int i = 0; i < n; i++) if(a[i] > b[i]) is = 0;
 
        if(is) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
