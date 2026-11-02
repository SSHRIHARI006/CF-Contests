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
        string s;
        cin>>s;
        int ans = 0;
        int curr = 0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){curr++;ans=max(ans,curr);}
            else curr = 0;
        }
        cout << (ans+1)/2 << endl;
    }
    return 0;
}
