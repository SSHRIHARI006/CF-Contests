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
        cin>>n;
        int flag = false; 
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==67)flag = true;
        }
        if(flag)cout<<"YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
