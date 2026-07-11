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
        vector<int> A(n + 1);
        for(int i = 1; i <= n; i++) cin >> A[i];
        
        vector<int> pre1(n + 1, 0), pre2(n + 1, 0), pre3(n + 1, 0);
        vector<int> val(n + 1, 0); 
        for(int i = 1; i <= n; i++){
            if(A[i] == 1){
                pre1[i] = pre1[i-1] + 1;
                pre2[i] = pre2[i-1];
                pre3[i] = pre3[i-1];
            }
            if(A[i] == 2){
                pre1[i] = pre1[i-1];
                pre2[i] = pre2[i-1] + 1;
                pre3[i] = pre3[i-1];
            }
            if(A[i] == 3){
                pre1[i] = pre1[i-1];
                pre2[i] = pre2[i-1];
                pre3[i] = pre3[i-1] + 1;
            }
            val[i] = pre1[i] + pre2[i] - pre3[i];
        }
        
        vector<int> suf_max(n + 1, -1e9);
        suf_max[n - 1] = val[n - 1];
        for(int j = n - 2; j >= 1; j--){
            suf_max[j] = max(suf_max[j + 1], val[j]);
        }

        int flag = false;
        
        for(int i = 1; i <= n - 2; i++){
            if(pre1[i] >= (pre2[i] + pre3[i])){
                
                if(suf_max[i + 1] >= (pre1[i] + pre2[i] - pre3[i])) {
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}