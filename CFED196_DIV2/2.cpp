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
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
       // sort(a.begin(),a.end());
        int res = INT_MAX;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                //if(i==j)continue;
                if(a[j]<a[i])cnt++;
                else if(a[j]%a[i]!=0)cnt++;
                
                
            }
            res = min(res,cnt);
        }
        cout << res << endl;
    }
    return 0;
}
