#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int f =1;
        long long t = accumulate(a.begin(), a.end(), 0LL);
        if(n==2){
            if(a[0]==1 && a[1]==1){cout << -1 << endl; continue;}
            else{ cout << t -1 << endl ; continue;}
        }
        for(int i=1;i<=n-2;i++){
            if(a[i]!=1)f=0;
        }
        if(f){
            if(a[0]==1 && a[n-1]==1){
                cout << -1 << endl;
                continue;
            }
            else cout << t - n + 1 << endl;
        }
        else cout << t - 1 << endl;
    }
 
    return 0;
}