#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        
        vector<long long> q;
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            q.push_back(x);
        }

        vector<long long> lim;
        for(int i=0; i<n; i++){
            long long r;
            cin >> r;
            if(r < k){
                long long val = (k - r) / (r + 1);
                if(val > 0) lim.push_back(val);
            }
        }

        sort(q.begin(), q.end());
        sort(lim.begin(), lim.end());

        int i = 0, j = 0, ans = 0;
        while(i < q.size() && j < lim.size()){
            if(q[i] <= lim[j]){
                ans++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        cout << ans << "\n";
    }
}