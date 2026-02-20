#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a;
        cin>>a;
        int max = a;int ans = 0,b;
        for(int i=1;i<n;i++){
            cin>>b;
            if(b>a)a=b;
        }
        cout << n*a << endl;
    }
 
    return 0;
}
