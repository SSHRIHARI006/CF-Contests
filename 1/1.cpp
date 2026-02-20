#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;

    while(t--){
        int n; long long a;
        cin >> n >> a;
        vector<long long> v(n);
        for(auto &x : v) cin >> x;

        int best = -1;
        long long best_b = 0;

        for(int i = 0; i < n; i++){
            long long b = 2LL * v[i] - a;  

            int score;
            if(b > a){
                score = n - (upper_bound(v.begin(), v.end(), v[i]) - v.begin());
            }
            else if(b < a){
                score = (lower_bound(v.begin(), v.end(), v[i]) - v.begin());
            }
            else{
                score = 0;
            }

            if(score > best){
                best = score;
                best_b = b;
            }
        }

        cout << best_b << "\n";
    }
}
