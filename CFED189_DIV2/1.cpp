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
        ll x,y;
        cin>>x>>y;
        ll k = y/x;
        if(k<=2)cout << "NO"<<endl;
        else cout << "yes" << endl;
    }
    return 0;
}
