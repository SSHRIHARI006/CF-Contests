#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long total = 0;
        for(int i = 0; i + 1 < n; i++)
            total += abs(a[i] - a[i+1]);

        long long ans = total;

        for(int i = 0; i < n; i++){
            long long cur = total;

            if(i > 0)
                cur -= abs(a[i] - a[i-1]);
            if(i + 1 < n)
                cur -= abs(a[i] - a[i+1]);
            if(i > 0 && i + 1 < n)
                cur += abs(a[i-1] - a[i+1]);

            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
