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
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>p(n+1);
        for(int i=1;i<=n;i++)cin>>p[i];
        int g = gcd(x,y);
        bool flag = true;

        for(int i=1;i<=n;i++){
            if(abs(p[i]-i)%g !=0)flag = false;
        }

        if(flag)cout << "YES" << endl;
        else cout << "NO" << endl;


    }
    return 0;
}
