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
        int two= 0,gtt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==2)two++;
            else if(x>2)gtt++;
        }
        if(two>=2 || gtt>=1)cout << "YES"<<endl;
        else cout << "NO" << endl;
    }
    return 0;
}
