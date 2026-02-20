#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> A(n), B(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];

        long long k_max = 0, k_min = 0;

        for(int i = 0; i < n; i++){
            long long r1 = k_max - A[i];
            long long r2 = k_min - A[i];
            long long b1 = B[i] - k_min;
            long long b2 = B[i] - k_max;
            long long nk_max = max(r1, b1);
            long long nk_min = min(r2, b2);
            k_max = nk_max;
            k_min = nk_min;
        }

        cout << k_max << "\n";
    }
}
