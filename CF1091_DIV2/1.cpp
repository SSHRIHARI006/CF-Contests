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
        int n,k;
        cin>>n>>k;
        int sum = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum%2==1){
            cout << "YES"<<endl;
        }
        else{
            if((k*n)%2==0)cout << "YES"<<endl;
            else cout << "NO"<<endl;
        }
    }
    return 0;
}
