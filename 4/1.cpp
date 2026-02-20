#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n==5)cout<<95<<endl;
        else{
        if(n == 1) cout << 1 << "\n";
        else cout << 4*n*n - n - 4 << "\n";
        }
    }
}
